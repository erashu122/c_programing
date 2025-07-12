#include <stdio.h>
#include <string.h>

int main()
{
    char user_input[1000];
    printf("Hi, I'm a chatbot. What's your name?\n");
    
    while (fgets(user_input, 1000, stdin))
    {
        if (strstr(user_input, "hello") || strstr(user_input, "hi"))
        {
            printf("Hi there! How can I help you?\n");
        }
        else if (strstr(user_input, "what is your name"))
        {
            printf("My name is Chatbot.\n");
        }
        else if (strstr(user_input, "how are you"))
        {
            printf("I'm doing well, thank you. How about you?\n");
        }
        else if (strstr(user_input, "bye"))
        {
            printf("Goodbye, it was nice chatting with you!\n");
            break;
        }
        else
        {
            printf("I'm sorry, I don't understand. Can you please rephrase?\n");
        }
    }
    
    return 0;
}

