#include <iostream>
#include <cmath>
using namespace std;
void dectobin(int dec) {
if (dec<0)
{
  cout<<"Invalid input"<<endl;
  cout<<"Enter a decimal number:";
  cin>>dec;
  cout<<endl;
}

int arrb[100],i=0;
for(i=0;dec>0;i++)
{
  arrb[i] = dec%2;
  dec= dec/2;
}
cout<<"Binary:";
for(int j=i-1;j>=0 ;j--)
{
cout<<arrb[j]; }
cout<<endl;

}

int convertBinaryToDecimal(int n)
{   int k,counter;
    while (n) {
        if ((n % 10) > 1)
            {
              cout<<"Invalid input";
      cout<<"Enter a decimal:"<<endl;
      cin>>n;
            }
            else{
        n=n / 10;
            }
    }

    int x=0,i=0,dec=0;
  for(i=0;n!=0;i++){
    x=n%10;
    dec+=x*pow(2,i);
    n=n/10;
  }
    return dec;
}

void decimaltohexa(int dec){
    if(dec<1)
    {
        cout<<"invalid input"<<endl;
        cout<<"Enter a decimal number:";
        cin>>dec;

        cout<<endl;
    }

  char arrh[100];
  int i=0;
  for(i;dec>0;i++)
  {
    int x=0;
    x=dec%16;
    if(x < 10)
    {
        arrh[i] = x + 48;
    }
    //https://www.geeksforgeeks.org/program-decimal-hexadecimal-conversion/
    else{
      arrh[i] = x + 55;
    }
    dec= dec/16;
  }
  cout<<"hexadecimal:";
  for(int j=i-1;j>=0 ;j--)
  {
  cout<<arrh[j]; }
  cout<<endl;
}

int hex2dec(string hex)
{
  int ans=0,i;
  int len = hex.size();
  for(i=0;i<len;i++){
    if (hex[i]>57 && hex[i]<65){
      cout<<"Invalid input";
      cout<<"Enter a hexadecimal:"<<endl;
      cin>>hex;
    }
    for(i=0;i<len;i++){
      if (hex[i]>70 && hex[i]<97){
        cout<<"Invalid input"<<endl;
        cout<<"Enter a hexadecimal:";
        cin>>hex;
      }
      for(i=0;i<len;i++){
        if (hex[i]>70 && hex[i]<97){
          cout<<"Invalid input"<<endl;
          cout<<"Enter a hexadecimal:";
          cin>>hex;
        }
  }
  for(i=0;i<len;i++){
    if (hex[i]>102 && hex[i]<127)
    {
        ans =ans+ (hex[i]-48)*pow(16,len-i-1);
    } else if (hex[i]>=65 && hex[i]<=70) {
        ans =ans + (hex[i]-55)*pow(16,len-i-1);
    } else if (hex[i]>=97 && hex[i]<=102) {
        ans = ans +(hex[i]-87)*pow(16,len-i-1);
    }
    //https://stackoverflow.com/questions/11031159/converting-hexadecimal-to-decimal
  }
return ans;
}
  }
}
int main()
{
  while (1)
  {
    int n;
    cout<<"enter 1 for decimal system"<<endl;
    cout<<"enter 2 for binary system"<<endl;
    cout<<"enter 3 for hexadecimal system"<<endl;
    cout<<"Enter -1 to exit "<<endl;
    cout<<"Enter your choice: ";
    cin>>n;
    cout<<endl;
    if(n==-1)
    {
      break;
    }
    if(n==1)
    {
      int n;
      cout<<"Enter a decimal number:";
        cin>>n;
        while(cin.fail()){
            cin.clear();
            cin.ignore();
            string dummy;
            getline(cin, dummy);
            cout << "Invalid input";
            cin >> n;
        }
      dectobin(n);
      decimaltohexa(n);
    }
    if(n==2){
        int n;
      cout<<"Enter a binary number number:";
        cin>>n;
        cout<<"Decimal:"<< convertBinaryToDecimal(n)<<endl;
        int x= convertBinaryToDecimal(n);
        decimaltohexa(x);
    }
    if(n==3){
      string n;
      cout<<"Enter a hexadecimal number number:";
        cin>>n;
        cout<<endl;
        cout <<"Decimal:" <<hex2dec(n) << endl;
        int x=hex2dec(n);
        dectobin(x);

    }
  }
}
