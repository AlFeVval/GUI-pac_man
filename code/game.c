int player_x = 30;
int player_y = 30;

internal void
simulate_game(Input* input){
	clear_screen(0x551100);
	if(pressed(BUTTON_LEFT)) player_x-=20;
	if(pressed(BUTTON_RIGHT)) player_x+=20;
	if(pressed(BUTTON_DOWN)) player_y-=20;
	if(pressed(BUTTON_UP)) player_y+=20;
	
	draw_rect_in_pixels(player_x, player_y, 30+player_x, 30+player_y, 0xffff00);

}
