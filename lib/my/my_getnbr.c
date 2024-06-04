/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** Task 05
*/
int my_strlen(char const* str);

int calc_neg(char *str)
{
    int len = my_strlen(str);
    int count_neg = 0;

    for (int i = 0; i < len && str[i] <= 48; i++) {
        if (str[i] == 45)
            count_neg++;
    }
    if ((count_neg % 2) == 1)
        count_neg = -1;
    else
        count_neg = 1;
    return (count_neg);
}

long long int find_nbr(char *str)
{
    long long int stock_digit = 0;
    long long int len = my_strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            stock_digit = ((stock_digit * 10) + (str[i] - 48));
        if ((str[i] < '0' || str[i] > '9') && str[i - 1] <= '9' &&
        str[i - 1] >= '0')
            return (stock_digit);
        if ((str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= 'A' && str[i] <= 'Z'))
            return (stock_digit);
    }
    return (stock_digit);
}

long long int my_getnbr(char *str)
{
    int neg_value;
    long long int digit;

    neg_value = calc_neg(str);
    digit = find_nbr(str) * neg_value;
    return (digit);
}
