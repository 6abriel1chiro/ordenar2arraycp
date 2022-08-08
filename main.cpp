/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;




int main()
{
string nombres[10];
int promedios[10];

for (int i = 0; i < 6; i++) 
{
    
    cout<<"estudiantes: "; cin>>nombres[i];

}

for (int j = 0; j < 6; j++) 
    {
        
    cout<<"notas: "; cin>>promedios[j];
    }
    
int lon = 6;
    
    int Temp;
    string Temp2;
         for(int i=0;i<lon;i++) 
                for(int q=0;q<lon-1;q++) 
                    if(promedios[q]<promedios[q+1])
                    {
                        Temp=promedios[q]; 
                        promedios[q]=promedios[q+1]; 
                        promedios[q+1]=Temp;
                        
                        Temp2=nombres[q]; 
                        nombres[q]=nombres[q+1]; 
                        nombres[q+1]=Temp2;
                        
                    }
                    

    for(int i=0;i<lon;i++) {
        cout<<"estudiante "<<" "<<nombres[i];
        cout<<"promedio "<<" "<<promedios[i];
    }


    
    
}
