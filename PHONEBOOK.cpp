#include<iostream>
#include<windows.h>
using namespace std;
void start();
int menu();
int k=0;


int main(){
start();
string name[100];
string no[100];
string add[100];
int check=0;
int Total_contacts=0;
check=menu();
do{
if(check==1){
cout<<"\t\t\t\t\t\t Name :";
cin>>name[k];

cout<<"\t\t\t\t\t\t Phone No :";
cin>>no[k];


k++;
Total_contacts++;

}
else if (check==2){
        int check2=0;
for(int i=0; i<100; i++){
if(name[i]!="\0")
cout<<"\t\t\t\t\t\t Name :"<<name[i]<<"		Phone :"<<no[i]<<endl;
check2++;
}
if(check2==0){
    cout<<"\t\t\t\t\t\t";
}
}

else if(check==3){
string temp;
cout<<"\t\t\t\t\t\t Number :";
cin>>temp;
int check2=0;
int index;
for(int i=0;i<100;i++)
{
if(temp==no[i])
{
cout<<"\t\t\t\t\t\t Number is found\n";
cout<<"\t\t\t\t\t\t Name : "<<name[i]<<"	Phone : "<<no[i]<<endl;
check2++;
}
}
if(check2==0){
    cout<<"\t\t\t\t\t\t This number is not found in my contact list\n";
}
}
else if(check==4){
string temp;
cout<<"\t\t\t\t\t\t Name :";
cin>>temp;
int check2=0;
int index;
for(int i=0;i<100;i++)
{
if(temp==name[i])
{
cout<<"\t\t\t\t\t\t Name is found\n";
cout<<"\t\t\t\t\t\t Name : "<<name[i]<<"	Phone : "<<no[i]<<endl;
check2++;
}

}
if(check2==0){
    cout<<"\t\t\t\t\t\tThis name is not found in your contact list\n";
}
}
else if(check==5){
string temp,temp2,temp3;
cout<<"\t\t\t\t\t\t Name :";
cin>>temp;
int check2=0;
int index;
for(int i=0;i<100;i++)
{
if(temp==name[i])
{
cout<<"\t\t\t\t\t\tNew Name : ";
cin>>temp2;
cout<<"\t\t\t\t\t\tNew Number : ";
cin>>temp3;
name[i]=temp2;
no[i]=temp3;
check2++;
cout<<"\t\t\t\t\t\tUpdate Succesfully ";
}

}
if(check2==0){
    cout<<"\t\t\t\t\t\t This name is not found in my contact list\n";
}
}
else if(check==6){
string temp;
cout<<"\t\t\t\t\t\t For Delete Enter Name :";
cin>>temp;
int check2=0;
int index;
for(int i=0;i<100;i++)
{
if(temp==name[i])
{
cout<<"\t\t\t\t\t\t Delete Successfully\n";
cout<<"\t\t\t\t\t\t Name : "<<name[i]<<"	Phone : "<<no[i]<<endl;
name[i]="\0";
no[i]="\0";
check2++;
Total_contacts--;
}
}
if(check2==0){
    cout<<"\t\t\t\t\t\t This name is not found in my contact list\n";
}
}
else if(check==7){

cout<<"\t\t\t\t\t\t All Delete Successfully\n";

for(int i=0;i<k;i++){
    name[i]="\0";
    no[i]="\0";
}
k=0;

Total_contacts=0;


}
else if(check==8){
cout<<"\t\t\t\t\t\tTotal number of contact list are : "<<Total_contacts<<endl;

}
check=menu();
}while(check!=9);
}
int menu(){
cout<<"\t\t\t\t\t\t---------------------------------------------\n";
cout<<"\t\t\t\t\t\t---------------------------------------------\n";
cout<<"\t\t\t\t\t\t|  		PHONEBOOK APPLICATION  		|\n";
cout<<"\t\t\t\t\t\t---------------------------------------------\n";
cout<<"\t\t\t\t\t\t|						|\n";
cout<<"\t\t\t\t\t\t|		[1] Add Contacts		|\n";
cout<<"\t\t\t\t\t\t|		[2] Display All Contacts	|\n";
cout<<"\t\t\t\t\t\t|		[3] Search by Number		|\n";
cout<<"\t\t\t\t\t\t|		[4] Search by Name		|\n";
cout<<"\t\t\t\t\t\t|		[5] Update			|\n";
cout<<"\t\t\t\t\t\t|		[6] Delete			|\n";
cout<<"\t\t\t\t\t\t|		[7] Delete All			|\n";
cout<<"\t\t\t\t\t\t|		[8] Number of Contacts		|\n";
cout<<"\t\t\t\t\t\t|						|\n";
cout<<"\t\t\t\t\t\t---------------------------------------------\n";
cout<<"\t\t\t\t\t\t|  		[9] Exit   			|\n";
cout<<"\t\t\t\t\t\t---------------------------------------------\n";

int a;
cin>>a;
system("cls");
return a;
}

void start(){
system("Color 0B");
cout<<"\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t-----------------------------\n";
cout<<"\t\t\t\t\t\t-----------------------------\n";
cout<<"\t\t\t\t\t\t     PHONEBOOK APPLICATION\n";
cout<<"\t\t\t\t\t\t-----------------------------\n\n";
cout<<"\t\t\t\t\tLoading ";
char x = 219;
for(int i=0; i<35; i++)
{
cout<<x;
if(i<10)
Sleep(300);
if(i>=10 && 1<20)
Sleep(150);
if(i>=10)
Sleep(25);
}
system("cls");
}
