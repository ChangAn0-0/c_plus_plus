#include <iostream>
#include <string>
struct free_throws
{
	std::string name;
	int made;
	int attempts;
	float percent;
};

void display(const free_throws& ft)
{
	using std::cout;
	cout << ft.name << '\n'
		<< ft.made << '\n'
		<< ft.attempts << '\n'
		<< ft.percent << std::endl;
}

void set_pc(free_throws& ft)
{
	if (ft.attempts != 0)
		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
	else
		ft.percent = 0;
}

free_throws& accumulate(free_throws& target, const free_throws& source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}

int main(void)
{
	free_throws one = { "aaa",13,14 };
	free_throws two = { "bbb",10,16 };
	free_throws three = { "ccc",7,9 };
	free_throws four = { "ddd",5,9 };
	free_throws five = { "eee",6,14 };
	free_throws team = { "fff",0,0 };

	free_throws dup;

	set_pc(one);
	display(one);
	accumulate(team, one);
	display(team);

	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);

	dup = accumulate(team, five);
	std::cout << "display team:\n";
	display(team);
	std::cout << "dup:\n";
	display(dup);
	set_pc(four);

	accumulate(dup, five);
	std::cout << "after dup:\n";
	display(dup);

	return 0;
}