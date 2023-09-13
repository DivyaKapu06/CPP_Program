// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

#include<stdio.h>
#include<string.h>

int convert_ascii_to_int(int s)
{
    //int res = 0;
    switch(s)
    {
        case 48: return 0;
                 break;
        case 49: return 1;
                 break;
        case 50: return 2;
                 break;
        case 51: return 3;
                 break;
        case 52: return 4;
                 break;
        case 53: return 5;
                 break;
        case 54: return 6;
                 break;
        case 55: return 7;
                 break;
        case 56: return 8;
                 break;
        case 57: return 9;
                 break;       
        default: break;
    }
    //return res;
}

int solution(char *E, char *L) {
    // Implement your solution here
    unsigned int hours_e = 0; 
    unsigned int hours_l = 0; 
    unsigned int hours_elapsed = 0; 
    unsigned int minutes_e = 0;
    unsigned int minutes_l = 0;
    unsigned int minutes_elapsed = 0;
    unsigned int total_cost = 0;
    
    for(int i=0; i<strlen(E);i++)
    {
        if(E[i]!=':' && L[i]!=':')
        {
            hours_e = hours_e *10 + convert_ascii_to_int((int)E[i]);
            hours_l = hours_l *10 + convert_ascii_to_int((int)L[i]);
            
        }
        else
        {
            break;
        }
    }
    for(int i=strlen(E)-1; E[i]!=':';i--)
    {
        if(E[i]!=':' && L[i]!=':')
        {
            minutes_e = minutes_e *10 + convert_ascii_to_int((int)E[i]);
            minutes_l = minutes_l *10 + convert_ascii_to_int((int)L[i]);
            
        }
        else
        {
            break;
        }
    }
    if(minutes_l >= minutes_e)
    {
    minutes_elapsed = minutes_l - minutes_e;
    }
    else
    {
        minutes_elapsed = minutes_e - minutes_l;
    }
    if(minutes_elapsed==0 || minutes_e > minutes_l)
    {
        hours_elapsed = hours_l - hours_e;
    }
    else {
    hours_elapsed = (hours_l - hours_e) + 1;
    }
    if(hours_elapsed > 1)
    {
        total_cost = 2 +  3 + (hours_elapsed -1)*4 ;
    }
    else {
    total_cost = 5;
    }
    //printf("%d",total_cost);
    return total_cost;
}

int main()
{
    int cost = solution("10:30","12:00");
    printf("%d",cost);
}
