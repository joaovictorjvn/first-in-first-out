#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main()
{
    string text[15][4]; 
    string f_comp[15][4];

    ifstream stream1("D:\\College\\OS\\OSassignment_sol\\idiot.txt");   
    if(!stream1)
    {
        cout<<"Cannot read file\n";
        exit(1);
    }

    while(!stream1.eof())               
    {
        for(int i=0; i<15; i++)
        {
            for(int j=0; j<4; j++)
            {
                stream1>>text[i][j];    
            }

        }

    }  

    for(int i=0; i<15; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<text[i][j]<<"\t";

        }
        cout<<endl;
    }

    int z;
    cin>>z;
}
