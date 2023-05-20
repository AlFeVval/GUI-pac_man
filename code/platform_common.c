struct{
	bool is_down;
	bool changed;
}typedef Button;

enum{
	BUTTON_LEFT,
	BUTTON_RIGHT,
	BUTTON_UP,
	BUTTON_DOWN,

	BUTTON_COUNT
};

struct{
	int mouse_x;
	int mouse_y;

	Button buttons[BUTTON_COUNT];
}typedef Input;

#define pressed(b) (input -> buttons[b].is_down && input->buttons[b].changed)
#define released(b) (!input -> buttons[b].is_down && input->buttons[b].changed)
#define is_down(b) (!input -> buttons[b].is_down)
