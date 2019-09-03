#include <iostream>
#include<windows.h>
#include<mysql.h>
#include<sstream>
using namespace std;
int main()
{
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,"192.168.0.47", "junaid","junaid" ,"timetable",0 , NULL, 0 );
    if(conn)
    {
        cout<<"\tconnected";
    }
    else
    {
        cout<<"not connected";
    }
    jump:
    	int a;
    cout<<endl<<endl<<endl<<"\t\t\t Time-Table\t\t\t"<<endl;
	cout<<"\tpress 1: To View Student Details"<<endl;
	cout<<"\tpress 2: To View Lecturer Details"<<endl;
	cin>>a;
	if(a==1)
	{
        cout<<"\t\t press 1: To add new Student"<<endl;
		cout<<"\t\t press 2: To View Existing Student"<<endl;
		int b;
		cin>>b;
		if(b==1)
		{
                int qstate = 0;
                stringstream sn;
                cout<<"\t\t\tEnter the name of Student\t\t\t"<<endl; // graping the student name for user
                string sname;
                cin>>sname;
                cout<<"\t\t\tEnter the Roll number\t\t\t"<<endl; // graping the student name for user
                string rs;
                cin>>rs;
                cout<<"\t\t\tEnter the Room\t\t\t"<<endl; // graping the student name for user
                string room;
                cin>>room;

                qstate =mysql_query(conn,"insert into student(name, roll_no, room) values('matthew ', 'Ag31', '5')");

                if(qstate == 0){
                    cout<<"\t\t\t record inserted.."<<endl;
                    cout<<"\do you want to start again (y/n)"<<endl;
                    string cond;
                    cin>>cond;
                    if(cond == "y")
                    {
                        goto jump;
                    }
                }else{
                    cout<<"\t\t\t failed"<<endl;   // end of student name entry  section
                    cout<<"\do you want to start again (y/n)"<<endl;
                    string cond;
                    cin>>cond;
                    if(cond == "y")
                    {
                        goto jump;
                    }
                }
		}
        else if(b==2)
        {
          MYSQL_ROW row;
		  MYSQL_RES* res;
            if(conn)
            {
                int qstate = mysql_query(conn,"SELECT id,name,roll_no,room FROM student");
                if(!qstate)
                {
                    res = mysql_store_result(conn);
                    cout<<"Id" <<"\t"<<"Name"<<"\t"<<"Roll Num"<<"\t"<<"Room"<<endl<<endl;
                    while(row = mysql_fetch_row(res))
                    {
                        cout<<row[0]<<"\t"<<row[1]<<"\t"<<row[2]<<"\t"<<row[3]<<endl<<endl;

                    }
                }
            }
        }
	}
	 else if(a==2)
    {
        int c;
		cout<<"\t\t press 1: To add new Lecturer"<<endl;
		cout<<"\t\t press 2: To View Existing Lecturer"<<endl;
		cin>>c;
        if(c==1)
        {
                int qstate = 0;
                stringstream sn;
                cout<<"\t\t\tEnter the name of lecturer\t\t\t"<<endl; // graping the student name for user
                string sname;
                cin>>sname;
                cout<<"\t\t\tEnter the room\t\t\t"<<endl;
                string rs;          // varible nam
                cin>> rs;

                cout<<"\t\t\tEnter the subject\t\t\t"<<endl;
                string subject;          // varible nam
                cin>> subject;
                //sn<<"INSERT INTO student(name,roll_no,room) VALUES('"<< sname<< rs<<"23" <<"')";
                //string query = sn.str();
                //const char* q = query.c_str();
                qstate =mysql_query(conn,"insert into lecturer(tname, room , subject) values('matthew','Ag31', 'Bsc Computer Science')");

                if(qstate == 0){
                    cout<<"\t\t\t record inserted.."<<endl;
                    cout<<"\do you want to start again (y/n)"<<endl;
                    string cond;
                    cin>>cond;
                    if(cond == "y")
                    {
                        goto jump;
                    }

                }else{
                    cout<<"\t\t\t failed"<<endl;   // end of student name entry  section
                    cout<<"\do you want to start again (y/n)"<<endl;
                    string cond;
                    cin>>cond;
                    if(cond == "y")
                    {
                        goto jump;
                    }
                }
        }
        else if(c==2){
          MYSQL_ROW row;
		  MYSQL_RES* res;
            if(conn){
                int qstate = mysql_query(conn,"SELECT id,tname,room, subject FROM lecturer");
                if(!qstate){
                    res = mysql_store_result(conn);
                    cout<<"ID"<<"\t"<<"Lecturer Name"<<"\t"<<"Room"<<"\t"<<"Subject"<<endl<<endl;
                    while(row = mysql_fetch_row(res)){
                        cout<<row[0]<<"\t"<<row[1]<<"\t"<<row[2]<<"\t"<<row[3]<<endl<<endl;

                    }
                }
            }
        }
    }
	else{
        cout<<"\twrong insert"<<endl;
        goto jump;

	}
}