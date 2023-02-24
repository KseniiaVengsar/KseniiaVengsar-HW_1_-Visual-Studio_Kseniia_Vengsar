// 1_Home_Work_Знакомство_с_Visual_Studio.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

int main()
{
    setlocale(LC_ALL, "RU");


    std::string z;
    std::ifstream fin("TextFile1.txt");
    std::ofstream fout("TextFile2.txt");

    
    std::cout << fin.is_open() << std::endl; 
     

    fin >> z;
    std::cout << z << std::endl;

    int N = std::stoi(z);
    int* mas = new int[N];

    for (int i = 0; i < N; i++)
    {
        fin >> mas[i];
    }

    for (int i = 0; i < N; i++)
    {
        std::cout << mas[i] << " ";
    }
    ///////////////////////////////////////////////////////////////////////////////////
    std::cout << std::endl;

    std::string w;
    fin >> w;
    std::cout << w << std::endl;

    int M = std::stoi(w);
    int* mas2 = new int[M];

    for (int i = 0; i < M; i++)
    {
        fin >> mas2[i];
    }

    for (int i = 0; i < M; i++)
    {

        std::cout << mas2[i] << " ";
    }
    ////////////////////////////////////////////////////////////////// 

    fout << w << std::endl;


    int temp2 = mas2[M - 1];

    for (int i = M-2; i >= 0; i--)
    {
        mas2[i+1] = mas2[i];

    }
    mas2[0] = temp2; 




    /*int temp2 = mas2[M - 1];

    for (int i = 0; i <M; i++)///////
    {
        mas2[i] = mas2[i - 1];
        
    }
    mas2[0] = temp2;*/



    for (int i = 0; i < M; i++)
    {
        fout << mas2[i] << " ";
    }

//////////////////////////////////////////////////////////////////////////
    fout << "\n" << z << std::endl;
    //int t;
   // t = mas[N - 1];
    //for (int i = N - 2; i >= 0; i--)
   // {
       // mas[i + 1] = mas[i];
   // }
  //  mas[0] = t;

   int temp = mas[0];
    for (int i = 0; i < N-1; i++)////////////
    {
        mas[i] = mas[i + 1]; 
    }
     mas[N - 1] = temp;

    for (int i = 0; i < N; i++)
    {
        fout << mas[i] << " ";
    }
    


    fin.close();
    fout.close();
    delete[]mas;
    delete[]mas2;

    return 0;

  }


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
