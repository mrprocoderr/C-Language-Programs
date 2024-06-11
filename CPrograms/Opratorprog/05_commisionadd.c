#include <stdio.h>
void main()
{

    float basic_sal, net_sal, commision, s_amount;
    printf("Enter your basic salary:");
    scanf("%f", &basic_sal);

    printf("Enter your Sales Amount:");
    scanf("%f", &s_amount);

    if (s_amount >= 5000 && s_amount <= 7500)
    {
        commision = s_amount * 0.03;
    }
    else
    {
        if (s_amount >= 7501 && s_amount <= 10500)
        {
            commision = s_amount * 0.08;
        }
        else
        {
            if (s_amount >= 10501 && s_amount <= 15000)
            {
                commision = s_amount * 0.11;
            }
            else
            {
                commision = s_amount * 0.15;
                
            }
        }
    }
    net_sal = commision + basic_sal;

    printf("\nNet Salary : %f", net_sal);
    printf("\ncommision :%f", commision);
}