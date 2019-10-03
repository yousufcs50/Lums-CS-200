#include <iostream>
using namespace std;
int array_p[10],counter=0;
int checkarr[10];
int jack=0;
int login_arr[10],boy=0;
int admin_input;
string new_pass="abc123";
string dispadmin;int adminpasscount=0;
int arr_parrpasschange[10],pc=0;
int req_passchange [10],rq=0;
int id_arr[10];

void admin_mode();
void pass_change_admin();
void req_change_admin();
string passchange ="You have requested for password change successfully.";
void std_mode();
void menu ();
int checkfuc(int roll);
int log_in();
void switch_std();
void switch_admin();
void log_out();
void change_pass();
void seating_arr();
void msg();

char lab_arr[4][8];
string p_arr[10];
int main (){
//char lab_arr[4][8];
for(int i=0;i<4;i++)
{
  for(int j=0;j<8;j++)
  {
      lab_arr[i][j]='*';
}
}
//int id_arr[10];
for(int i=0;i<10;i++){
  id_arr[i]=22100000+i+1;
}
//string p_arr[10];
p_arr[0]="abc123";
p_arr[1]="abc456";
p_arr[2]="abc789";
p_arr[3]="def123";
p_arr[4]="def456";
p_arr[5]="def789";
p_arr[6]="xyz123";
p_arr[7]="xyz456";
p_arr[8]="xyz789";
p_arr[9]="xyz123";
std_mode();

}
void std_mode()
{ int roll,checker=0,pass,x=0,p6,n;
  menu();
    cin>>n;
    if(n==-1)
    {
      return;
    }
    if(n==1)
    {;
    log_in();//id_arr[10],p_arr[10],lab_arr[4][8]);
    }
    if(n==2)
    {
     log_out();
    }
     if(n==3)
    {
     change_pass();
    }
    if(n==4)
    {
    msg();
    }
    if(n==5)
    {
    seating_arr();
    }
    if(n==6)
    {
    switch_std();
    }

}
void menu(){
cout<<"***Student mode***"<<endl;
cout<<"Press 1 to log in to a computer"<<endl;
cout<<"Press 2 to log off from a computer"<<endl;
cout<<"Press 3  to request for password reset"<<endl;
cout<<"Press 4 to view message from Helpdesk"<<endl;
cout<<"Press 5 to view Lab seating arrangement"<<endl;
cout<<"Press 6 to switch mode"<<endl;
cout<<"Press -1 to exit"<<endl;
cout<<"Enter your choice:";
}
int log_in(){
   // int id_arr[10],string p_arr[10],char lab_arr[4][8
  int roll,x,checker=0,row,c;
  string pass;
  cout<<endl;
  cout<<"rollnumber:";
  cin>>roll;

  cout<<endl<<"password:";
  cin>>pass;
    x= checkfuc(roll);

    if (x==1)
    {
      cout<<"You can't log into two computers at once."<<endl;
      std_mode();
    }
    if(x==0){
    for(int i=0;i<10;i++){
  if(id_arr[i]==roll && p_arr[i]==pass)
  {
    cout<<"Enter row:";
    cin>>row;
    cout<<"Enter collumn:";
    cin>>c;
    if(lab_arr[row-1][c-1]=='*'){
      lab_arr[row-1][c-1]='o';
      login_arr[boy]=roll;
      counter++;
      boy++;
      cout<<"you have been successfully logged into computer no:"<<row*c<<endl;
      std_mode();
    }
    else{
      cout<<"You can't log into two computers at once.";
      std_mode();
    }
    i++;
  }
  else{
    cout<<"error"<<endl;
    std_mode();
  }
    }
  }

  return 0;

}
int checkfuc(int roll){
int w=0;
checkarr[counter]=roll;
  counter++;
  for(int i=0;i<counter-1;i++)
  {
    if(checkarr[i]==roll)
    {
         w++;

      return w ;
    }
    else{
      return w;
    }
}

}
void log_out(){
  int roll,o;
  cout<<"Enter roll number: ";
  cin>>roll;
  for(int i=0;i<10;i++){
  if(id_arr[i]==roll){
  for(int i=0;i<10;i++){
  if(login_arr[i]==roll)
  {
    cout<<"you have been signed out successfully"<<endl;
    std_mode();
  }
  else{
    cout<<"invalid"<<endl;
    std_mode();
  }
}
  }
  else{
    cout<<"invalid id"<<endl;
    std_mode();
  }
  }
}
void change_pass()
{
    cout<<"Enter roll number: ";
  int roll,counts=0;
  cin>>roll;
  for(int i=0;i<10;i++){
  if(id_arr[i]==roll){
  for(int i=0;i<10;i++){
  if(login_arr[i]==roll)
  {
    cout<<"you cant request for password change if you are logged in."<<endl;
    std_mode();
    counts++;
  }
  }
  for(int i=0;i<pc;i++){
  if(arr_parrpasschange[i]==roll)
  {
    cout<<"you cant request for password change when you have already requested for another password"<<endl;
    std_mode();
  } }
  if(counts<1){
    cout<<passchange<<endl;
    arr_parrpasschange[pc]=roll;
      pc++;
    req_passchange[rq]=roll;
    rq++;
    std_mode();
  }
  }
  else{
       cout<<"invalid id"<<endl;
    std_mode();
    }
  }
}

void msg()
{
  int roll;
  cout<<"Enter roll number: ";
  cin>>roll;
  cout<<endl;
  for(int i=0;i<10;i++){
    if(req_passchange[i]==roll)
  {
    cout<<"Dear "<<roll<<"Thank you for contacting IST Helpdesk. It is our top priority toresolve your issue in the most timely manner."<<endl;
  std_mode();
}
}
  if(adminpasscount==1){
    cout<<dispadmin<<endl;
    std_mode();
  }
  else{
    cout<<"no msg"<<endl;
    std_mode();
  }
}
void seating_arr(){
  int roll;
  cout<<"Enter roll number: ";
  cin>>roll;
  for(int i=0;i<10;i++){
  if(id_arr[i]==roll){
  cout<<endl;
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<8;j++)
    {
        cout<<lab_arr[i][j];
  }
  cout<<endl;
    }
    std_mode();
  }


    else{
       cout<<"invalid id"<<endl;
    std_mode();
    }

}
}
void admin_mode(){
    cout<<"***Admin mode***"<<endl;
  cout<<"Press 1 to trace a student"<<endl;
  cout<<"Press 2 to view change password requests"<<endl;
  cout<<"Press 3 to change password for a student"<<endl;
  cout<<"Press 4 to view seating arrangement of Lab"<<endl;
  cout<<"Press 5 to switch mode"<<endl;
  cout<<"Press -1 to exit"<<endl;
  cout<<"Enter number:";
  cin>>admin_input;
  if(admin_input==-1){
    return;
  }
  if(admin_input==1){
    for(int i=0;i<10;i++){
        cout<<login_arr[i];
    }
  }
  if(admin_input==2){
    req_change_admin();
  }
  if(admin_input==3){
    pass_change_admin();
  }
  if(admin_input==4){
    seating_arr();
  }
  if(admin_input==5){
    switch_admin();
  }
}
void switch_std(){
  admin_mode();
}
void switch_admin(){
  std_mode();
}
void req_change_admin(){
  for(int i=0;i<rq;i++){
    cout<<req_passchange[i];
}
  cout<<endl;
  admin_mode();

}
void pass_change_admin(){
  int roll;
  cout<<"rollnumber:";
  cin>>roll;
  for(int i=0;i<10;i++)
  if(req_passchange [i]==roll){
    cout<<"your new password is:"<<new_pass<<endl;
    dispadmin="your new password is: abc123";
    adminpasscount++;
    int j=(roll%10)-1;
    p_arr[j]=new_pass;

  }
admin_mode();
}
