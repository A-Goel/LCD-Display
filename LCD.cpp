#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
int main()
{
    int i,u,a,d[100]={0},c=0,q,k,t,p,pm,w;
    double b;
    char num[10][5][5]={' '},yn,neg[5][5]={' '};
    
    ///////////////////////////Declaration of all 10 elemts (9 digits and -ve sign)///////////////////////////////////////////////
    //-
    for(u=1;u<4;++u)
                    neg[2][u]='-';
    //0
    for(i=0;i<5;i+=4)
                    for(u=0;u<5;++u)
                                    num[0][i][u]='-';
    num[0][1][0]=num[0][1][4]=num[0][2][0]=num[0][2][4]=num[0][3][0]=num[0][3][4]='|';
    for(i=0;i<5;i++)

    //1
    num[1][0][4]=num[1][1][4]=num[1][2][4]=num[1][3][4]=num[1][4][4]='|';

    //2
    for(i=0;i<5;i+=2)
                    for(u=0;u<5;++u)
                                    num[2][i][u]='-';
    num[2][1][4]=num[2][3][0]='|';

    //3
    for(i=0;i<5;i+=2)
                    for(u=0;u<5;++u)
                                    num[3][i][u]='-';
    num[3][1][4]=num[3][3][4]='|';

    //4
    for(i=2;i<5;i+=5)
                    for(u=0;u<5;++u)
                                    num[4][i][u]='-';
    num[4][0][0]=num[4][0][4]=num[4][1][0]=num[4][1][4]=num[4][3][4]=num[4][4][4]='|';

    //5
    for(i=0;i<5;i+=2)
                    for(u=0;u<5;++u)
                                    num[5][i][u]='-';
    num[5][1][0]=num[5][3][4]='|';

    //6
    for(i=0;i<5;i+=2)
                    for(u=0;u<5;++u)
                                    num[6][i][u]='-';
    num[6][1][0]=num[6][3][0]=num[6][3][4]='|';

    //7
    for(i=0;i<5;i+=6)
                    for(u=0;u<5;++u)
                                    num[7][i][u]='-';
    for(u=2;u<5;++u)
                    num[7][2][u]='-';
    num[7][1][4]=num[7][3][4]=num[7][4][4]='|';
 
    //8
    for(i=0;i<5;i+=2)
                    for(u=0;u<5;++u)
                                    num[8][i][u]='-';
    num[8][1][0]=num[8][1][4]=num[8][3][0]=num[8][3][4]='|';

     //9
    for(i=0;i<3;i+=2)
                    for(u=0;u<5;++u)
                                    num[9][i][u]='-';
    num[9][1][0]=num[9][1][4]=num[9][3][4]=num[9][4][4]='|';
    
    initial:;c=1;
    //User enters number
    cout<<"Enter number:";cin>>a;b=p=a;
    cout<<endl<<endl;
    //If number is -ve convert it into its positive identity
    if(a<0)
    {
           a*=-1;
           b=a;
           pm=1;
           
    }
    
    //To find no. of digits in the number
    for(i=0;i<100;++i)
    {
         b=b/10;
         if(b<1)
         break;
         c++;           
    }
    
    //To find individual digits of the number
    for(i=0;i<c;++i)
    {
          d[i]=a%10;
          a=(a-d[i])/10;             
    }
 
    //To reverse the elements of the array storing the individual digits
    for(i=0;i<c/2;++i)
    {
                      t=d[i];
                      d[i]=d[c-1-i];
                      d[c-1-i]=t;
                      //cout<<d[i];
    }

    //////////////////////////////////////////////Final Display///////////////////////////////////////////////////////////
    //////////////////////////Displaying all the columns of the elements row-wise/////////////////////////////////////////
    //Loop1: For the row
    for(i=0;i<5;++i)
    {                  
                       k=0;
                       cout<<" ";
                       //If user enters a -ve number display -ve sign
                       if(p<0)
                       {
                              for(u=0;u<5;++u)
                                              cout<<neg[i][u];
                       }
                       //Loop2: For the element
                       for(q=d[k];k<c;++k)
                       {
                                         q=d[k];  
                                         
                                        //Loop3: For the columns  
                                           for(u=0;u<5;++u)
                                           {
                                                          
                                                           cout<<num[q][i][u];                
                                           }
                                           cout<<"  ";               
                       }
                       cout<<endl; 
    }
    
    cout<<endl<<endl<<"Another testcase? [y/n]";cin>>yn;
    if(yn=='y')
    {
              cout<<endl<<endl;
              goto initial;
    }
   
}

