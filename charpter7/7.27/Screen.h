#ifndef SCREEN_H
#define SCREEN_H
#include <string>
class Screen {
public:
	using pos = std::string::size_type;
	Screen() = default;
	Screen(pos h, pos w) : height(h), width(w), contents(h * w, ' ') {};
	Screen(pos h, pos w, char c) : height(h), width(w), contents(h * w, c) {};
	
	char get() const {
		return contents[cursor];
	}
	char get(pos ht, pos wd) const {
		return contents[width * ht + wd];
	}

	Screen& move(pos r, pos c) {
		cursor = width * r + c;
		return *this;
	}

	Screen& display(std::ostream &os) {
		do_display(os);
		return *this;
	}
	const Screen& display(std::ostream &os) const{
		do_display(os);
		return *this;
	}

	Screen& set(char c) {
		contents[cursor] = c;
		return *this;
	}
	Screen& set(pos r, pos col, char c) {
		contents[r * width + col] = c;
		return *this;
	}
private:
	pos cursor = 0, height = 0, width = 0;
	std::string contents;
	
	void do_display(std::ostream &os) const{
		os << contents;
	}
};
#endif