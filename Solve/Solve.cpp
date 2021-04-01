#include"Solve.h"



using namespace std;


string resol=".txt";
void mass_output(int* a, int b)
{
    std::cout<<"Your massive is \n";
    for(int i=0;i<b;i++)
        {
         std::cout <<" "<<a[i];
        }
    std::cout<<"\n";
}

void Task1_func(int *b,int a)
{
    if(a>0)
       {
          b=new(std::nothrow) int[a];
          if(b!=nullptr)                            //if memory not allocated you will have nullptr inside
            {
              for (int i = 0;i<=a;i++)
                {
                  b[i]=pow(2,i);
                 }
            mass_output(b, a);
            delete[] b;
            b=nullptr;
           }
          else
           {
           std::cout<< "we have to spend more money for memory))))))))))";
           }
         }
      else
        {
        std::cout<< "Looks like your input for massive size was incorrect\n";
        }
 }
void Task2_func(int **b,const size_t s1,const size_t s2)
{
    std:: cout <<"\nshould be showed something\n";
    b=new int *[s1];
   for(size_t i=0;i<s1;i++)
   {
       b[i]=new int [s2];
       std:: cout <<"element ready\n\n";
   }
   for (size_t i=0;i<s1;i++)
    {
      for (size_t j=0;j<s2;j++)
      {
           b[i][j]=i*10+j;//b[i][j]=rand();
         std::cout<<"el["<<i<<"]["<<j<<"]="<<b[i][j]<<" ";
      }
     std:: cout <<"\n";
    }

   for(size_t i=0;i<s1;i++)
      {
       std::cout<<"Deleting "<<i<<" line of matrix\n" ;
       delete[] b[i];
     }
    delete[] b;
    b=nullptr;
}

void Task3_func1(char* a)
{

    string  fileName= string(a)+resol;
    ofstream fout(fileName);
    for (int i=0;i<=50;i++)
    {

        fout <<"elem ["<<i<<"]\n";
    }
    fout.close();
}

void Task3_func2(char* a)
{
    char z='a';
    string  fileName= string(a)+resol;
    ofstream fout(fileName);
    for (int i=0;i<=100;i++)
    {
     fout <<z;
     z++;

    }
    fout.close();
}

void Task4_func(char* a,char *b, char *c)
{
  string  fileName1= string(a)+resol;
  string  fileName2= string(b)+resol;
  string  fileName3= string(c)+resol;
  ifstream fin1(fileName1),fin2(fileName2);
  ofstream fout(fileName3);
  fout<<fin1.rdbuf()<<fin2.rdbuf();

}

bool Task5_func(char* a,  char* b)
{
 int offset;
 string line;
 string  fileName= string(a)+resol;
 ifstream file;
  file.open (fileName);
  if(file.is_open())
  {
      while(!file.eof())
      {
          getline(file,line);
          if((offset=line.find(b,0))!=string::npos)
          {
            cout<<"we found "<<b<< "\n\n"<<line<<endl;
            return true;
          }
       else
          {
              //cout << "nothings found";
          }
      }
  file.close();
  }
else
  {
      cout <<"we cannot find even file itself";
      return false;
  }
}



