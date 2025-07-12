#include <unistd.h>
	
int solve(int grid[6][6])
{return 0;
}
void	set_inner_grid_1(int grid[6][6])
{
}
void	populate_outer_grid(int grid[6][6])
{
}
int is_solved(int grid [6][6])
{return 0;
}


void	main(void)
{
	int	grid[6][6];
	int	has_solution = 0;

	set_inner_grid_1(grid);
	populate_outer_grid(grid);
	has_solution = solve(grid);

	if (has_solution == 0)
	{
		write(1,"error",5);
	}
	else
	{
		write(1,"solution",8);
	}

}
