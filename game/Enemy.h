class Enemy
{
public:
  int16_t x = 0;
  int16_t y = 0;
  uint8_t move_itter = 0;
  uint8_t enemy_speed = 0;
};

//draw enemy
unsigned char const enemy_down[] PROGMEM =
{
  16, 18,
  0x00, 0x00, 0x00, 0xb0, 0xb8, 0xb8, 0x78, 0xf8, 0xf8, 0xf8, 0x78, 0xb8, 0xb0, 0xb0, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x1d, 0x7d, 0x7d, 0x7e, 0x3f, 0x3f, 0x3f, 0x7e, 0x7d, 0x7d, 0x3d, 0x02, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  
  0x00, 0x00, 0x00, 0xb4, 0xb8, 0xb8, 0x78, 0xf8, 0xf8, 0xf8, 0x78, 0xb8, 0xb8, 0xb4, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x1d, 0x3d, 0x3d, 0x3e, 0x1f, 0x1f, 0x1f, 0x3e, 0x3d, 0x3d, 0x1d, 0x02, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

unsigned char const enemy_right[] PROGMEM = 
{
  16, 18,
  0x00, 0x00, 0xcc, 0xbc, 0xc0, 0xc0, 0xbc, 0xc0, 0xfc, 0xfc, 0xfc, 0x8c, 0x70, 0x70, 0x80, 0x00, 
  0x00, 0x00, 0x03, 0x0f, 0x3f, 0x3f, 0x0f, 0x0f, 0x3f, 0x3f, 0x3f, 0x3f, 0x0f, 0x0f, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  
  0x00, 0x18, 0x98, 0x78, 0x78, 0x80, 0x78, 0x78, 0x98, 0xe0, 0xf8, 0xf8, 0x18, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0x1f, 0x1f, 0x3f, 0x1f, 0x1f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1e, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

unsigned char const enemy_left[] PROGMEM =
{
  16, 18,
  0x00, 0x00, 0x80, 0x60, 0x9c, 0xfc, 0xfc, 0xfc, 0xfc, 0xc0, 0xbc, 0xc0, 0xbc, 0xbc, 0xdc, 0x00, 
  0x00, 0x00, 0x03, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x1f, 0x1f, 0x3f, 0x1f, 0x1f, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  
  0x00, 0x00, 0x80, 0x60, 0x9c, 0xfc, 0xfc, 0xe0, 0xdc, 0xdc, 0xbc, 0xc0, 0xbc, 0xbc, 0xdc, 0x1c, 
  0x00, 0x00, 0x03, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x1f, 0x1f, 0x3f, 0x1f, 0x1f, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

unsigned char const enemy_up[] PROGMEM = 
{
  16, 18,
  0x00, 0x00, 0xc0, 0xf8, 0xc0, 0xc0, 0xbc, 0xc0, 0xc0, 0xc0, 0xbc, 0xc0, 0xf8, 0xf8, 0xc0, 0x00, 
  0x00, 0x00, 0x03, 0x1f, 0x3f, 0x3f, 0x3f, 0x1f, 0x1f, 0x1f, 0x3f, 0x3f, 0x1f, 0x1f, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  
  0x00, 0x00, 0xc0, 0xdc, 0xdc, 0xdc, 0xbc, 0xc0, 0xc0, 0xc0, 0xbc, 0xdc, 0xdc, 0xdc, 0xc0, 0x00, 
  0x00, 0x00, 0x03, 0x1f, 0x3f, 0x3f, 0x3f, 0x1f, 0x1f, 0x1f, 0x3f, 0x3f, 0x1f, 0x1f, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
