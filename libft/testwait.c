# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int main(void)
{
    fork();
    printf("%d", 21);
    return (0);
}
