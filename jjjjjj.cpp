#include <iostream>
#include <string.h>
#include <math.h>
#include <sstream>
#include <cstdlib>
using namespace std;
class res
{private:
double p,l,a;
public:
	void setp(double s)
	{p=s;}
	void seta(double f)
	{a=f;}
	void setl(double ru)
	{l=ru;}
	double getr()
	{double r=(p*l)/a;
	return r;
	
	}
	double ged()
{ cout<<a;
}
	void cinr()
	{ cout<<"enter a";
	  double a1;
	  a=a1;
	  
	  
	}

};
bool prime(int x)
{ int f=0;
  for(int i=2;i<x;i++)
  { if(x%i==0)
     { f++;
	 }
  }
  if(f>0)
  return false;
  else
  {return true;}
  }
 string z(float r)
 { ostringstream ss;

     ss<<r;
     string g;
     g=ss.str();
     return g;
 }
 float b(string h)
 { float d= atof(h.c_str());
 return d;
 }
int main()
{  string b = "ELECTRICAL_ENGINEERING"; int d=b.length();

for (int i=5; i<10; i++) 
 { int u =i+6;
   if( (d-i)< u)
   { cout<<"error"<<endl;;
   }
   else
   {  cout << b.substr(i,i+6) << "\n";
   }
 }

return 0;
}
