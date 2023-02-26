#include <stdio.h>
void slice(char *st, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        st[i] = st[m + i];
        i++;
    }
    st[i] = '\0';
}

int main()
{
    char name[36] = "roshan";
    int i = 1;
    int j = 4;
    slice(name, i, j);
    printf("%s", name);
    return 0;
}