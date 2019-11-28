#include "BraceChecker.h"
bool BraceChecker::isBalanced(const string &d)
{
   stack<char> temp;
   // for (int i = 0; i < d.size(); i++)
   for (auto i : d)
   {
      if (i == '(' || i == '{' || i == '[')
      {
         temp.push(i);
      }
      if (i == ')' || i == '}' || i == ']')
      {
         if (temp.empty())
         {
            return 1;
         }
         else
         {
            if ((temp.top() == '(' && i == ')') || (temp.top() == '{' && i == '}') || (temp.top() == '[' && i == ']'))
            {
               temp.pop();
            }
            else
            {
               return 0;
            }
         }
      }
   }
   return temp.empty();
}