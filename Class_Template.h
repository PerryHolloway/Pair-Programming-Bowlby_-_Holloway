#ifndef CLASS_TEMPLATE_H
#define CLASS_TEMPLATE_H

#include <iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

//template Declaration
template <class ANY_TYPE> // Maximum Class Template
ANY_TYPE maximum(ANY_TYPE a, ANY_TYPE b)
{
  return (a > b) ? a : b;
}

template <class CAddition> // Addition Class Template
CAddition add(CAddition a, CAddition b,CAddition c)
{
 return a + b + c;
}

template<class CMinimum> // Minimum Class Template
CMinimum cmin(CMinimum a, CMinimum b)
{
  return (a < b) ? a : b;
}

template<class ANY_TYPE>
ANY_TYPE cmulti(ANY_TYPE a, ANY_TYPE b)
{
  return a * b;
}

template<class ANY_TYPE> // Swap Class Template 
void CSwap(ANY_TYPE a, ANY_TYPE b)
{
  cout << "A = " << a << "B = " << b << endl;
  ANY_TYPE c;
  c = a;
  a = b;
  b = c;
  cout << "A = " << a << "B = " << b << endl;
}
#endif