#include <unistd.h>
int find_len(char *argv[])
{
    int i = 0;
    while (argv[1][i] != '\0')
    {
        ++i;
    }
    return i;
}
int is_empty(char *argv[])
{
    int i = 0;
    while (argv[1][i] != '\0')
    {
        if (argv[1][i] != ' ')
            return 0;
        ++i;
    }
    return 1;
}
void print_odd(int argc, char *argv[])
{
    if (argc == 2)
    {

        if (is_empty(argv) != 1)
        {
            int i = 0;
            while (argv[1][i] != '\0')
            {
                int len = find_len(argv);
                while (i % 2 == 0)
                {
                    ++i;
                }
                if (i < len)
                {
                    write(1, &argv[1][i], 1);
                    ++i;
                }
            }
        }
    }
    write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
    print_odd(argc, argv);
    return 0;
}