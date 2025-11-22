#include <stdio.h>
struct score{
    float marks;
    int rank;
};

void edit(struct score *s1)
{
    printf("before change in function: %f\n",s1->marks);
    s1->marks=89.7;
    printf("after change in function: %f\n",s1->marks);
}
void main()
{
    struct score s1={23.4,8};
    edit(&s1);
    printf("after change in main %f\n",s1.marks);
}