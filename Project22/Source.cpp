#include"Header.h"
using namespace std;

int main()
{
	Animal* ptr = new Parrot("Clown", 2, "Karagande(Kazahstan)");
	ptr->Eat();
	ptr->Move();
	Parrot* p = static_cast<Parrot*>(ptr);
	p->Fly();
	p->Print();
	
}