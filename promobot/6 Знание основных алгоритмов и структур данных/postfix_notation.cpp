// Напишите программу, использующую стек для обратной польской записи (постфиксная нотация).

#include <iostream>
#include <stack>
#include <string>

int main()
{
  std::string input_str = "12*3+4*";

  std::stack<std::string> input_stack;

  for (int i = input_str.length() - 1; i >= 0; --i)
  {
    std::string insert_to_stack(1, input_str[i]);

    input_stack.push(insert_to_stack);
  }

  float left = NULL;
  float right = NULL;

  while (!input_stack.empty())
  {
    std::string curent_val = input_stack.top();
    input_stack.pop();

    if (curent_val != "+" && curent_val != "-" && curent_val != "*" && curent_val != "/")
    {
      if (left == NULL)
      {
        left = std::stof(curent_val);
        continue;
      }

      if (right == NULL)
      {
        right = std::stof(curent_val);
        continue;
      }
    }
    else
    {
      switch (curent_val[0])
      {
        case '+': {
          float res = left + right;
          input_stack.push(std::to_string(res));
          break;
        }
        case '-': {
          float res = left - right;
          input_stack.push(std::to_string(res));
          break;
        }
        case '*': {
          float res = left * right;
          input_stack.push(std::to_string(res));
          break;
        }
        case '/': {
          float res = left / right;
          input_stack.push(std::to_string(res));
          break;
        }
        default:
          break;
      }

      if (input_stack.size() == 1)
        break;

      left = NULL;
      right = NULL;
    }
  }

  std::cout << input_stack.top() << "\n";

  std::cout << "hw\n";
  return 0;
}