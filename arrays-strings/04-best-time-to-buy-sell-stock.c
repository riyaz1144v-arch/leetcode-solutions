
#include <stdio.h>

int maxProfit(int prices[], int size)
{
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < size; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else
        {
            int profit = prices[i] - minPrice;

            if (profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
}

int main()
{
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int size1 = sizeof(prices1) / sizeof(prices1[0]);

    printf("Test Case 1:\n");
    printf("Maximum Profit: %d\n", maxProfit(prices1, size1));

    int prices2[] = {7, 6, 4, 3, 1};
    int size2 = sizeof(prices2) / sizeof(prices2[0]);

    printf("\nTest Case 2:\n");
    printf("Maximum Profit: %d\n", maxProfit(prices2, size2));

    return 0;
}
