#include "t_point.h"

void    flood_fill(char **tab, t_point size, t_point begin)
{
    char    point = tab[begin.y][begin.x];

    tab[begin.y][begin.x] = 'F';
    begin.y += 1;
    if (begin.y < size.y && tab[begin.y][begin.x] == point)
        flood_fill(tab, size, begin);
    begin.y -= 2;
    if (begin.y >= 0 && tab[begin.y][begin.x] == point)
        flood_fill(tab, size, begin);
    begin.y += 1;
    begin.x += 1;
    if (begin.x < size.x && tab[begin.y][begin.x] == point)
        flood_fill(tab, size, begin);
    begin.x -= 2;
    if (begin.x >= 0 && tab[begin.y][begin.x] == point)
        flood_fill(tab, size, begin);
    return ;
}

/*

#include "test_functions.h"
#include "flood_fill.h"

int main(void)
{
	char **area;
	t_point size = {8, 5};
	t_point begin = {2, 2};
	char *zone[] = {
		"1 1 1 1 1 1 1 1",
		"1 0 0 0 1 0 0 1",
		"1 0 0 1 0 0 0 1",
		"1 0 1 1 0 0 0 1",
		"1 1 1 0 0 0 0 1",
	}

	area = make_area(zone);
	print_tab(area);
	flood_fill(area, size, begin);
	putc('\n');
	print_tab(area);
	return (0);
}

*/