#ifndef NODEFAULT_H
#define NDEFAULT_H
struct Nodefault{
	Nodefault(int i);
};

struct C{
public: 
	C() = default;
	Nodefault mem;
};
#endif
