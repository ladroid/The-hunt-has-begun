const uint16_t mainm[] PROGMEM = { // Down one ocatve
  NOTE_E4,250, NOTE_FS4,250, NOTE_GS4,375, NOTE_E4,125, NOTE_FS4,125, NOTE_GS4,125, NOTE_E4,250, NOTE_FS4,250,
  NOTE_E4,250, NOTE_CS4,250, NOTE_B4,250, NOTE_A4,250, NOTE_GS4,250, NOTE_FS4,250, NOTE_GS4,500, NOTE_FS4,250,
  NOTE_FS4,250, NOTE_E4,125, NOTE_FS4,125, NOTE_GS4,375, NOTE_E4,125, NOTE_FS4,125, NOTE_GS4,125, NOTE_E4,250,
  NOTE_FS4,250, NOTE_CS4,250, NOTE_CS4,250, NOTE_B4,250, NOTE_A4,250, NOTE_GS4,250, NOTE_FS4,250, NOTE_E4,500,
  NOTE_REST,250, NOTE_E5,250, NOTE_DS5,250, NOTE_DS4,250, NOTE_FS4,250, NOTE_B4,375, NOTE_DS4,125, NOTE_FS4,250,
  NOTE_B4,250, NOTE_A4,125, NOTE_B4,125, NOTE_FS4,250, NOTE_GS4,125, NOTE_FS4,125, NOTE_GS4,125, NOTE_FS4,125,
  NOTE_GS4,375, NOTE_FS4,125, NOTE_GS4,250, NOTE_FS4,250, NOTE_E4,250, NOTE_FS4,125, NOTE_E4,125, NOTE_DS4,250,
  NOTE_FS4,250, NOTE_B4,375, NOTE_DS4,125, NOTE_FS4,250, NOTE_B4,250, NOTE_A4,125, NOTE_B4,125, NOTE_FS4,250,
  NOTE_GS4,500, NOTE_CS5,500, NOTE_GS4,500, NOTE_E5,250, NOTE_DS5,250, NOTE_DS4,250, NOTE_FS4,250, NOTE_B4,375,
  NOTE_DS4,125, NOTE_FS4,250, NOTE_B4,250, NOTE_E4,250, NOTE_FS4,125, NOTE_E4,125, NOTE_DS4,250, NOTE_FS4,250,
  NOTE_B4,375, NOTE_DS4,125, NOTE_FS4,250, NOTE_B4,250, NOTE_E4,250, NOTE_FS4,125, NOTE_E4,125, NOTE_A4,125,
  NOTE_GS4,125, NOTE_A4,125, NOTE_GS4,125, NOTE_A4,375, NOTE_E4,125, NOTE_DS4,375, NOTE_FS4,125, NOTE_FS4,125,
  NOTE_B4,125, NOTE_DS4,250, NOTE_E4,1000,
  TONES_END
};

const uint16_t playerDead[] PROGMEM = {
  NOTE_E5,137, NOTE_B5,137, NOTE_A5,137, NOTE_B5,137, NOTE_G5,137, NOTE_B5,137, NOTE_FS5,137, NOTE_B5,137,
  NOTE_E5,137, NOTE_B5,137, NOTE_DS5,137, NOTE_B5,137, NOTE_E5,137, NOTE_B5,137, NOTE_FS5,137, NOTE_B5,137,
  NOTE_E5,275, NOTE_B4,275, NOTE_A4,275, NOTE_B4,275, NOTE_E4,1100,
  TONES_END
};

const uint16_t enemyDead[] PROGMEM = {
  NOTE_C5,133, NOTE_G4,133, NOTE_A4,133, NOTE_C5,266, NOTE_G4,133, NOTE_G4,266, NOTE_D5,133, NOTE_C5,133,
  NOTE_A5,133, NOTE_D5,266, NOTE_C5,133, NOTE_A4,266, NOTE_DS5,133, NOTE_DS5,133, NOTE_DS5,266, NOTE_D5,266,
  NOTE_D5,133, NOTE_C5,133, NOTE_C5,533,
  TONES_END
};

bool isSound = false;
