#include <iostream>
using namespace std;
int main(int argc, const char** argv) {

    // for (int i = 1;i <= 5;i++)
    // {
    //     for (int i = 5; i >= 1; i--)
    //     {
    //         std::cout <<i;
    //     }
    //     std::cout  << std::endl;
    // }


    // rectangle
    // for (int i = 1; i <= 6; i++)
    // {
    //     for (int j = 1; j <= 6; j++)
    //     {
    //         if (j ==1 || j == 6 || i == 1 )
    //         {
    //             cout<<"*";
    //         }
    //         else
    //         {
    //             std::cout << " ";
    //         }
            
    //     }
    //     std::cout << std::endl;
    // }
    

    // reverse triangle 

    // for (int i = 0; i < 6; i++)
    // {
        
    //     for (int j = 6;j> i;j--)
    //     {
    //         std::cout << "*" ;
    //     }
    //     cout<<endl;
    // }


    // // printing the number in sequance
    // int n = 3;
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         std::cout << num;
    //         num++;
    //     }
    //     std::cout <<  std::endl;
        

    // // printint the char in sequence
    // for (int i = 0; i < 4; i++)
    // {
    //     char c = 'A';
    //     for (int i = 0; i < 4; i++)
    //     {
    //         std::cout <<c;
    //         c++;
    //     }
    //     cout<<endl;
    // }
    
    // // traingle 
    // int n = 6;
    // int number = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout<<j+1 ;
    //     }
    //     number++;
    //     cout<<endl;
        
    // }
    
    // // floyd's traingle
    // int n = 4;
    // int x = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout<<x;
    //         x++;
    //     }
    // }
    
    // // inverted traingle
    // int n = 4;
    // int x = 1;
    // for (int i = 0; i < n ; i++)
    // {
    //     for (int j = 0; j< i; j++)
    //     {
    //         std::cout << " ";
    //         /* code */
    //     }
    //     for (int j = i; j <= n-1; j++)
    //     {
            
    //         std::cout << x;
           
    //      /* code */
    //     }
    //     x++;
       
    // }
    
    // // pramid traingle
    // int n = 10;
    // for (int i = 0; i < n; i++)
    // {
    //     int x = 1;
    //     for (int j = n; j > i; j--)
    //     {
    //         cout<<' ';
    //     }
    //     for (int j = 0; j<=i; j++)
    //     {
    //         std::cout <<x;
    //         x++;
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         std::cout << j+1;
    //         x++;
    //     }
        
    //     cout<<endl;
    // }
    
    // // hallow diamond shape
    // int n = 25;
    // for (int i = 0; i < n; i++)
    // {
        
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if (i!=0)
    //     {
    //         for (int j = 0; j < 2*i-1; j++)
    //         {
    //             std::cout << " " ;
    //         }
    //         std::cout << "*" ;
    //     }
    //     cout<<endl;
        
    // }
    // for (int i = 0; i < n-1; i++)
    // {
        
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout<<" ";
    //     }

    //     cout<<"*";


    //     if (i != n - 2)
    //     {
    //         for (int j = 0; j < 2*(n-i)-5; j++)
    //         {
    //             std::cout << " " ;
    //         }
    //         cout << "*" ;
    //     }

    //     cout<<endl;
        
    // }
   
    // buterfly effect 
    // upper
    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {   
    //     // star
    //     for (int j= 0;j<=i;j++)
    //     {
    //         std::cout << "*" ;
    //     }

    //     // spaces
    //     for (int j = n;j>i+1;j--)
    //     {
    //         std::cout << " " ;
    //     }
    //     for (int j = n;j>i+1;j--)
    //     {
    //         std::cout << " " ;
    //     }

        
    //     // star
    //     for (int j= 0;j<=i;j++)
    //     {
    //         std::cout << "*" ;
    //     }

       
    //     cout<<endl;
    // }
    // // lower
    // for (int i = n-1; i >= 0; i--)
    // {   
    //     // star
    //     for (int j= 0;j<=i;j++)
    //     {
    //         std::cout << "*" ;
    //     }

    //     // spaces
    //     for (int j = n;j>i+1;j--)
    //     {
    //         std::cout << " " ;
    //     }
    //     for (int j = n;j>i+1;j--)
    //     {
    //         std::cout << " " ;
    //     }

        
    //     // star
    //     for (int j= 0;j<=i;j++)
    //     {
    //         std::cout << "*" ;
    //     }

       
    //     cout<<endl;
    // }
    return 0;
}