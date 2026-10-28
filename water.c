#include <stdio.h>
int main()
{
    int goal, morning, afternoon, evening, total;
    float percent;

    printf("Enter daily water goal (in ml): ");
    scanf("%d", &goal);
    printf("Water drunk in morning (ml): ");
    scanf("%d", &morning);
    printf("Water drunk in afternoon (ml): ");
    scanf("%d", &afternoon);
    printf("Water drunk in evening (ml): ");
    scanf("%d", &evening);

    total = morning + afternoon + evening;

    if (goal <= 0)
    {
        printf("Goal must be more than 0.\n");
        return 0;
    }

    percent = (total * 100.0) / goal;

    printf("\nTotal water drunk: %d ml\n", total);
    printf("Goal completed: %.1f%%\n", percent);

    if (total >= goal)
        printf("Great! Your daily goal is completed.\n");
    else if (total >= goal / 2)
        printf("Good, but please drink %d ml more.\n", goal - total);
    else
        printf("Too low! Please drink %d ml more.\n", goal - total);

    return 0;
}
Sample output
Enter daily water goal (in ml): 2500
Water drunk in morning (ml): 600
Water drunk in afternoon (ml): 500
Water drunk in evening (ml): 400

Total water drunk: 1500 ml
Goal completed: 60.0%
Good, but please drink 1000 ml more.
