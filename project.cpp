#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
int ilab,flab;
 float m1,m2,in,fin;
 static int a[200];
 int i,t1,t2,t3,t4,t5,t6,t7,t8,l1,l2,l3,l4,ltotal,ttotal,flag=0;
 float total;
 int lab()
 {
     int tot;
     cout<<"Enter the  lab Internal marks out of 20"<<endl;
    cin>>ilab;
        cout<<"Enter the External lab  marks out of 30"<<endl;
        cin>>flab;
        tot=ilab+flab;
        cout<<"Marks obtained is:"<<tot<<endl;
        if(tot>43)
        {
            cout<<"Grade-A+(10)"<<endl;
            return 10;
        }
        else if(tot>=38&&tot<43)
        {
             cout<<"Grade-A(9)"<<endl;
            return 9;
        }
         else if(tot>=33&&tot<38)
        {
             cout<<"Grade-B(8)"<<endl;
            return 8;
        }
         else if(tot>=28&&tot<33)
        {
             cout<<"Grade-C(6)"<<endl;
            return 6;
        }
         else if(tot>=23&&tot<28)
        {
             cout<<"Grade-D(5)"<<endl;
            return 5;
        }
         else if(tot>=18&&tot<23)
        {
             cout<<"Grade-E(4)"<<endl;
            return 4;
        }
        else
        {
            cout<<"Grade-F& fail"<<endl;
            return 0;
        }


 }

int theory()
{

 cout<<endl<<"Enter the Sessional 1 marks out of 30"<<endl;
 cin>>m1;
  cout<<endl<<"Enter the Sessional 2 marks out of 30"<<endl;
  cin>>m2;
   cout<<endl<<"Enter the internal and assignment marks  out of 10"<<endl;
   cin>>in;
    cout<<endl<<"Enter the Final marks out of 60"<<endl;
    cin>>fin;
    float total;
    total=fin+in+((m1+m2)/2);
    cout<<"Marks obtained is:"<<total<<endl;
    if(total>=85)
    {
        cout<<" Grade-A+(10)"<<endl;
        return 10;
    }
    else if(total>=75&&total<85)
    {
        cout<<" Grade-A(9)"<<endl;
     return 9;
    }
    else if(total>=65&&total<75)
    {
        cout<<" Grade-B(8)"<<endl;
        return 8;
    }
    else if(total>=50&&total<65)
    {
        cout<<" Grade-C(6)"<<endl;
        return 6;
    }
        else if(total>=40&&total<50)
        {
        cout<<" Grade-D(5)"<<endl;
        return 5;
        }
        else if(total>=33&&total<40)
        {
        cout<<" Grade-E(4)"<<endl;
        return 4;
        }
         else
         {
            cout<<" Grade-F and fail"<<endl;
            return 0;
         }


}
void sem1()
{
    cout<<"Subjects are respectively:"<<endl<<"Physics 1- HAS 101"<<endl<<"Mathematics 1-HAS 103"<<endl<<"Basics of Mechanical Engineering-MU 101"<<endl<<"fundamentals Of Management - MGMT 101"<<endl<<"Elements of Electronic Enginnering-E101"<<endl<<"Chemistry-HAS 105"<<endl<<"Environmental Studies"<<endl<<"Workshop 1-WS101"<<endl<<"Physics lab 1-HAS 109"<<endl<<"BME lab-MU 102"<<endl;
 cout<<"Enter the Physics Marks"<<endl;
 t1=theory();

 cout<<"Enter the Mathematics  Marks"<<endl;
 t2=theory();

 cout<<"Enter the BME Marks"<<endl;
 t3=theory();

 cout<<"Enter the FOM Marks"<<endl;
 t4=theory();

 cout<<"Enter the EEE Marks"<<endl;
 t5=theory();

  cout<<"Enter the Chemistry Marks"<<endl;
 t6=theory();

 cout<<"Enter the E.V.S Marks"<<endl;
 t7=theory();

  cout<<"Enter the Workshop Marks out of 100"<<endl;
  int ws;
  cin>>ws;
  cout<<"Workshop marks is:"<<ws<<endl;
  if(ws>=85)
    {
        cout<<" Grade-A+(10)"<<endl;
        ws=10;

    }
    else if(ws>=75&&ws<85)
    {
        cout<<" Grade-A(9)"<<endl;
        ws=9;


    }
    else if(ws>=65&&ws<75)
    {
        cout<<" Grade-B(8)"<<endl;
        ws=8;

    }
    else if(ws>=50&&ws<65)
    {
        cout<<" Grade-C(6)"<<endl;
        ws=6;

    }
        else if(ws>=40&&ws<50)
        {
        cout<<" Grade-D(5)"<<endl;
        ws=5;

        }
        else if(ws>=33&&ws<40)
        {
        cout<<" Grade-E(4)"<<endl;
        ws=4;
        }
         else
         {
            cout<<" Grade-F and fail"<<endl;
            flag=1;
         }

  ttotal=(t1+t2+t3+t4+t5+t6+t7+ws)*4;

    cout<<"Enter the Physics lab Marks"<<endl;
    l1=lab();

    cout<<"Enter the BME lab Marks"<<endl;
    l2=lab();
    total=ttotal+l1+l2;
    if(t1==0||t2==0||t3==0||t4==0||t5==0||t6==0||t7==0||l1==0||l2==0||flag==1)
        cout<<endl<<"Reappear and No SGPA Available";
    else
      cout<<endl<<"SGPA for 1st Semester is:"<<(total)/34;

}
void sem2()
{
cout<<"Subjects are respectively:"<<endl<<"Physics 2- HAS 102"<<endl<<"Mathematics 2-HAS 104"<<endl<<"Essentials Of Communication-HAS 111"<<endl<<"Electrical Technology-E105"<<endl<<"Fundamentals of Computer & Programming with C-CE-101"<<endl<<"Engineering Drawing-MU 103 "<<endl<<"Workshop 2-WS102"<<endl<<"Physics lab 2-HAS 110"<<endl<<"ET lab-E109"<<endl<<"FOCP Lab-CE 103"<<endl;
 cout<<"Enter the Physics Marks"<<endl;
 t1=theory();

 cout<<"Enter the Mathematics  Marks"<<endl;
 t2=theory();

 cout<<"Enter the EOC Marks"<<endl;
 t3=theory();

 cout<<"Enter the ET Marks"<<endl;
 t4=theory();

 cout<<"Enter the FOCP Marks"<<endl;
 t5=theory();

  cout<<"Enter the ED Marks"<<endl;
 t6=theory();
  cout<<"Enter the Workshop Marks out of 100"<<endl;
  int ws;
  cin>>ws;
  cout<<"Workshop marks is:"<<ws<<endl;
  if(ws>=85)
    {
        cout<<" Grade-A+(10)"<<endl;
        ws=10;

    }
    else if(ws>=75&&ws<85)
    {
        cout<<" Grade-A(9)"<<endl;
        ws=9;

    }
    else if(ws>=65&&ws<75)
    {
        cout<<" Grade-B(8)"<<endl;
        ws=8;

    }
    else if(ws>=50&&ws<65)
    {
        cout<<" Grade-C(6)"<<endl;
        ws=6;

    }
        else if(ws>=40&&ws<50)
        {
        cout<<" Grade-D(5)"<<endl;
          ws=5;
        }
        else if(ws>=33&&ws<40)
        {
        cout<<" Grade-E(4)"<<endl;
        ws=4;
        }
         else
         {
            cout<<" Grade-F and fail"<<endl;
              flag=1;
         }
    ttotal=((t1+t2+t3+t4+t5+ws)*4)+(t6*2);

    cout<<"Enter the Physics lab Marks"<<endl;
    l1=lab();

    cout<<"Enter the ET lab Marks"<<endl;
    l2=lab();

     cout<<"Enter the FOCP lab Marks"<<endl;
    l3=lab();
    total=ttotal+l1+l2+l3;
        if(t1==0||t2==0||t3==0||t4==0||t5==0||t6==0||l1==0||l2==0||l3==0||flag==1)
        cout<<endl<<"Reappear and No SGPA Available";
    else
        cout<<endl<<"SGPA for 2nd Semester is:"<<(total)/29;

}
void sem3()
{
cout<<"Subjects are respectively:"<<endl<<"Data Structure Using C-CE201"<<endl<<"Discrete Structure-CE203"<<endl<<"Digital & Analog Communication-CE205"<<endl<<"Digital Electronics & Computer Organisation-CE207"<<endl<<"Economic For Engineers-MGMT 201"<<endl<<"Mathematic 3"<<endl<<"DSA lab-CE215"<<endl<<"DE lab-CE217"<<endl<<" PC lab-CE213"<<endl;
 cout<<"Enter the Data structure Marks"<<endl;
 t1=theory();

 cout<<"Enter the Discrete Structure Marks"<<endl;
 t2=theory();

 cout<<"Enter the DAC Marks"<<endl;
 t3=theory();

 cout<<"Enter the DECO Marks"<<endl;
 t4=theory();

 cout<<"Enter the Economics Marks"<<endl;
 t5=theory();

  cout<<"Enter the Mathematics  Marks"<<endl;
 t6=theory();
  ttotal=(t1+t2+t3+t4+t5+t6)*4;


    cout<<"Enter the Data Structure lab Marks"<<endl;
    l1=lab();
    l1=l1*2;

    cout<<"Enter the DE lab Marks"<<endl;
    l2=lab();
    l2=l2*2;

    cout<<"Enter the PC lab Marks"<<endl;

    l3=lab();
    l3=l3*2;
    total=ttotal+l1+l2+l3;
        if(t1==0||t2==0||t3==0||t4==0||t5==0||t6==0||l1==0||l2==0||l3==0||flag==1)
        cout<<endl<<"Reappear and No SGPA Available";
    else
        cout<<endl<<"SGPA for 3rd Semester is:"<<(total)/30;


}
void sem4()
{

 cout<<"Subjects are respectively:"<<endl<<"Database Management System- CE202"<<endl<<"Computer Networks -CE204"<<endl<<"Rapid Application Development-IT206"<<endl<<"Object Oriented Programming using C++-CE208"<<endl<<"Computer Graphics-CE210"<<endl<<"Operational Research -CE212"<<endl<<"DBMS lab-CE214"<<endl<<"C++ lab-CE216"<<endl<<"RAD lab-IT218"<<endl<<"Computer Graphics lab-IT220"<<endl;
 cout<<"Enter the DBMS Marks"<<endl;
 t1=theory();

 cout<<"Enter the Computer Network Marks"<<endl;
t2=theory();

 cout<<"Enter the RAD Marks"<<endl;
 t3=theory();

 cout<<"Enter the OOP Marks"<<endl;
 t4=theory();

 cout<<"Enter the Computer Graphic Marks"<<endl;
 t5=theory();

  cout<<"Enter the Operational Research  Marks"<<endl;
 t6=theory();
 ttotal=(t1+t2+t3+t4+t5+t6)*4;


    cout<<"Enter the DBMS lab Marks"<<endl;
    l1=lab();
    l1=l1*2;

    cout<<"Enter the OOP lab Marks"<<endl;
    l2=lab();
    l2=l2*2;

    cout<<"Enter the Computer Graphic lab Marks"<<endl;
    l3=lab();

    cout<<"Enter the RAD lab Marks"<<endl;
    l4=lab();

    ltotal=l1+l2+l3+l4;
    total=ltotal+ttotal;

    if(t1==0||t2==0||t3==0||t4==0||t5==0||t6==0||l1==0||l2==0||l3==0||l4==0||flag==1)
        cout<<endl<<"Reappear and No SGPA Available";
    else
    cout<<endl<<"SGPA for 4th Semester is:"<<(total)/30;

}

void sem5()
{

 cout<<"Subjects are respectively:"<<endl<<"Principles Of Operating System- CE301"<<endl<<"Internet Fundamentals & Web Technology -CE303"<<endl<<"Multimedia Technology-IT305"<<endl<<"Network Programming & Administration-IT307"<<endl<<"Wireless Communication-CE309"<<endl<<"Network Security-IT311"<<endl<<"OS lab-CE315"<<endl<<"IFWT lab-CE317"<<endl<<"Multimedia Lab-IT313"<<endl<<"NPA lab-IT319"<<endl;
 cout<<"Enter the Principles Of Operating System Marks"<<endl;
 t1=theory();

 cout<<"Enter the Internet Fundamentals & Web Technology Marks"<<endl;
t2=theory();

 cout<<"Enter the Multimedia Technology Marks"<<endl;
 t3=theory();

 cout<<"Enter the Network Programming & Administration Marks"<<endl;
 t4=theory();

 cout<<"Enter the Wireless Communication Marks"<<endl;
 t5=theory();

  cout<<"Enter the Network Security Marks"<<endl;
 t6=theory();
 ttotal=(t1+t2+t3+t4+t5+t6)*4;


    cout<<"Enter the OS lab Marks"<<endl;
    l1=lab();
    l1=l1*2;

    cout<<"Enter the Multimedia lab Marks"<<endl;
    l2=lab();
    l2=l2*2;

    cout<<"Enter the IFWT lab Marks"<<endl;
    l3=lab();

    cout<<"Enter the NPA lab Marks"<<endl;
    l4=lab();

    ltotal=l1+l2+l3+l4;
    total=ltotal+ttotal;

    if(t1==0||t2==0||t3==0||t4==0||t5==0||t6==0||l1==0||l2==0||l3==0||l4==0||flag==1)
        cout<<endl<<"Reappear and No SGPA Available";
    else
    cout<<endl<<"SGPA for 5th Semester is:"<<(total)/30;
}
void sem6()
{

 cout<<"Subjects are respectively:"<<endl<<"Principles Of Software Engineering- CE302"<<endl<<"High Speed Networks-IT304"<<endl<<"Real Time Systems-CE306"<<endl<<"Elective - 1 "<<endl<<"Mobile Adhoc Networks-IT308"<<endl<<".Net Technologies-IT310"<<endl<<".Net Technology lab-IT312"<<endl<<"MANET lab-IT314"<<endl<<"SE lab-IT316"<<endl;
 cout<<"Enter the Principles Of Software Engineering Marks"<<endl;
 t1=theory();

 cout<<"Enter the High Speed Networks Marks"<<endl;
t2=theory();

cout<<"Enter the Real Time Systems Marks"<<endl;
t3=theory();

 cout<<"Enter the Elective - 1 Marks"<<endl;
 t4=theory();

 cout<<"Enter the Mobile Adhoc Networks Marks"<<endl;
 t5=theory();

 cout<<"Enter the .Net Technologies Marks"<<endl;
 t6=theory();


 ttotal=(t1+t2+t3+t4+t5+t6)*4;


    cout<<"Enter the .Net Technology lab Marks"<<endl;
    l1=lab();
    l1=l1*2;

    cout<<"Enter the MANET lab Marks"<<endl;
    l2=lab();
    l2=l2*2;

    cout<<"Enter the SE lab Marks"<<endl;
    l3=lab();
    l3=l3*2;

    ltotal=l1+l2+l3;
    total=ltotal+ttotal;

    if(t1==0||t2==0||t3==0||t4==0||t5==0||t6==0||l1==0||l2==0||l3==0||flag==1)
        cout<<endl<<"Reappear and No SGPA Available";
    else
    cout<<endl<<"SGPA for 6th Semester is:"<<(total)/30;

}
void sem7()
{

 cout<<"Subjects are respectively:"<<endl<<"Optical Networks- CE401"<<endl<<"Advance Client Server Technology-IT403"<<endl<<"Object Oriented System Development-CE405"<<endl<<"Distributed Operating system -CE407"<<endl<<"Elective - 2"<<endl<<"Elective - 3"<<endl<<" Project-IT413-C"<<endl<<"Seminar-IT415-C"<<endl<<"AGP lab-IT417-C"<<endl;
 cout<<"Enter the Optical Networks Marks"<<endl;
 t1=theory();

 cout<<"Enter the Advance Client Server Technology Marks"<<endl;
t2=theory();

cout<<"Enter the Object Oriented System Development Marks"<<endl;
t3=theory();

 cout<<"Enter the Distributed Operating system Marks"<<endl;
 t4=theory();

 cout<<"Enter the Elective - 2 Marks"<<endl;
 t5=theory();

 cout<<"Enter the Elective - 3 Marks"<<endl;
 t6=theory();
 cout<<"Enter the Project Marks out of 100"<<endl;
  int pr;
  cin>>pr;
  cout<<"Workshop marks is:"<<pr<<endl;
  if(pr>=85)
    {
        cout<<" Grade-A+(10)"<<endl;
        pr=10;

    }
    else if(pr>=75&&pr<85)
    {
        cout<<" Grade-A(9)"<<endl;
        pr=9;

    }
    else if(pr>=65&&pr<75)
    {
        cout<<" Grade-B(8)"<<endl;
        pr=8;

    }
    else if(pr>=50&&pr<65)
    {
        cout<<" Grade-C(6)"<<endl;
        pr=6;

    }
        else if(pr>=40&&pr<50)
        {
        cout<<" Grade-D(5)"<<endl;
          pr=5;
        }
        else if(pr>=33&&pr<40)
        {
        cout<<" Grade-E(4)"<<endl;
        pr=4;
        }
         else
         {
            cout<<" Grade-F and fail"<<endl;
              flag=1;
         }


 ttotal=(t1+t2+t3+t4+t5+t6+pr)*4;


    cout<<"Enter the Seminar Marks"<<endl;
    l1=lab();

    cout<<"Enter the AGP Lab Marks"<<endl;
    l2=lab();
    l2=l2*2;

    ltotal=l1+l2;
    total=ltotal+ttotal;

    if(t1==0||t2==0||t3==0||t4==0||t5==0||t6==0||l1==0||l2==0||flag==1)
        cout<<endl<<"Reappear and No SGPA Available";
    else
    cout<<endl<<"SGPA for 7th Semester is:"<<(total)/31;
}
void sem8()
{

}
int main()
{
    int sem;
    char choice;
    cout<<"FIND C.G.P.A OF IT "<<endl<<endl<<endl;
    do
    {
    cout<<"Enter Your Semester"<<endl;
    cin>>sem;
    switch(sem)
    {
    case 1:sem1();break;
    case 2:sem2();break;
    case 3:sem3();break;
    case 4:sem4();break;
    case 5:sem5();break;
    case 6:sem6();break;
    case 7:sem7();break;
    case 8:sem8();break;
    }
    cout<<endl<<"Do You want to Find any other Semester CGPA:(Y/N)"<<endl;
    cin>>choice;
    }while(choice=='Y');
    return 0;
}
