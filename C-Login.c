#include <stdio.h>
#include <string.h>

char userInput[1];
char usernameInput[50];
char passwordInput[50];
char username[] = "username";
char password[] = "password";

int main()
{
  while (1)
  {
    printf("Login = l | Exit = e : ");
    scanf("%s", userInput);

    if (strcmp(userInput, "l") == 0)
    {
      printf("Username: ");
      scanf("%s", usernameInput);
      printf("Password: ");
      scanf("%s", passwordInput);

      if (strcmp(usernameInput, username) == 0 && strcmp(passwordInput, password) == 0)
      {
        printf("Welcome John Smith.\n");
        break;
      }
      else
      {
        printf("Invalid Credentials.\n\n");
      }
    }
    else if (strcmp(userInput, "e") == 0)
    {
      printf("Program Exited.\n");
      break;
    }
    else
    {
      printf("Enter either 'l' to login or 'e' to exit.\n\n");
    }
  }

  return 0;
}