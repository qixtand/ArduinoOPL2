/**
 * This file contains MIDI instrument defenitions for use with the OPL2 Audio Board library. These were converted from
 * the General MIDI timbres by The Fat Man(TM). This file contains the melodic instrments only.
 *
 * Instrument definition is based on Adlib instrument bank format.
 *  0 - Rhythm mode drum channel
 *		Drum channels are predefined by the YM3812 and cannot be redefined. Regular instruments have their channel set
 *		to 0x00 and can be assigned to any channel by the setInstrument function. Rhythm mode instruments can only be
 *		used when rhythm mode is active (see OPL2.setPercussion).
 *
 *  1 - Channel c, operator 1, register 0x20
 *		Tremolo(1) | Vibrato(1) | Sustain(1) | KSR(1) | Frequency multiplier (4)
 *
 *  2 - Channel c, operator 1, register 0x40
 *		Key scale level(2) | Output level(6)
 *
 *  3 - Channel c, operator 1, register 0x60
 *		Attack(4) | Decay(4)
 *
 *  4 - Channel c, operator 1, register 0x80
 *		Sustain(4) | Release(4)
 *
 *  5 - Channel c, operator 1, register 0xE0
 *		Undefined(5) | Waveform(3)
 *
 *  6 - Channel c, register 0xC0
 *		Undefined(4) | Modulation feedback factor(3) | Synth type(1)
 *
 *  7 - Channel c, operator 2, register 0x20
 *  8 - Channel c, operator 2, register 0x40
 *  9 - Channel c, operator 2, register 0x60
 * 10 - Channel c, operator 2, register 0x80
 * 11 - Channel c, operator 2, register 0xE0
 */

unsigned char INSTRUMENT_PIANO1[12]   PROGMEM = { 0x00, 0x33, 0x5A, 0xB2, 0x50, 0x01, 0x00, 0x31, 0x00, 0xB1, 0xF5, 0x01 };
unsigned char INSTRUMENT_PIANO2[12]   PROGMEM = { 0x00, 0x31, 0x49, 0xF2, 0x53, 0x07, 0x01, 0x11, 0x03, 0xF1, 0xF5, 0x00 };
unsigned char INSTRUMENT_PIANO3[12]   PROGMEM = { 0x00, 0x31, 0x95, 0xD1, 0x83, 0x0D, 0x01, 0x32, 0x03, 0xC1, 0xF5, 0x00 };
unsigned char INSTRUMENT_HONKTONK[12] PROGMEM = { 0x00, 0x34, 0x9B, 0xF3, 0x63, 0x01, 0x01, 0x11, 0x00, 0x92, 0xF5, 0x01 };
unsigned char INSTRUMENT_EP1[12]      PROGMEM = { 0x00, 0x27, 0x28, 0xF8, 0xB7, 0x01, 0x02, 0x91, 0x00, 0xF1, 0xF9, 0x00 };
unsigned char INSTRUMENT_EP2[12]      PROGMEM = { 0x00, 0x1A, 0x2D, 0xF3, 0xEE, 0x01, 0x01, 0x11, 0x00, 0xF1, 0xF5, 0x00 };
unsigned char INSTRUMENT_HARPSIC[12]  PROGMEM = { 0x00, 0x35, 0x95, 0xF2, 0x58, 0x0F, 0x01, 0x32, 0x02, 0x81, 0xF6, 0x01 };
unsigned char INSTRUMENT_CLAVIC[12]   PROGMEM = { 0x00, 0x31, 0x85, 0xC9, 0x40, 0x01, 0x00, 0x35, 0x00, 0xC2, 0xB9, 0x01 };
unsigned char INSTRUMENT_CELESTA[12]  PROGMEM = { 0x00, 0x09, 0x15, 0xC7, 0x64, 0x08, 0x00, 0x01, 0x05, 0xB2, 0x35, 0x00 };
unsigned char INSTRUMENT_GLOCK[12]    PROGMEM = { 0x00, 0x06, 0x03, 0xF4, 0x44, 0x00, 0x01, 0x01, 0x1B, 0xF2, 0x34, 0x00 };
unsigned char INSTRUMENT_MUSICBOX[12] PROGMEM = { 0x00, 0x04, 0x06, 0xA9, 0x24, 0x0A, 0x01, 0x01, 0x01, 0xF5, 0x74, 0x00 };
unsigned char INSTRUMENT_VIBES[12]    PROGMEM = { 0x00, 0xD4, 0x00, 0xF6, 0x33, 0x00, 0x00, 0xF1, 0x00, 0x61, 0xE3, 0x00 };
unsigned char INSTRUMENT_MARIMBA[12]  PROGMEM = { 0x00, 0xD4, 0x00, 0xF7, 0xE8, 0x04, 0x00, 0xD1, 0x00, 0xA4, 0x64, 0x00 };
unsigned char INSTRUMENT_XYLO[12]     PROGMEM = { 0x00, 0x36, 0x16, 0xF7, 0xF7, 0x01, 0x00, 0x31, 0x07, 0xB5, 0xF5, 0x00 };
unsigned char INSTRUMENT_TUBEBELL[12] PROGMEM = { 0x00, 0x03, 0x1B, 0xA2, 0x43, 0x0B, 0x00, 0x00, 0x00, 0xF3, 0x74, 0x00 };
unsigned char INSTRUMENT_SANTUR[12]   PROGMEM = { 0x00, 0xC3, 0x8E, 0xF8, 0x35, 0x01, 0x01, 0x11, 0x00, 0xC3, 0x94, 0x01 };
unsigned char INSTRUMENT_ORGAN1[12]   PROGMEM = { 0x00, 0xE2, 0x07, 0xF4, 0x1B, 0x06, 0x01, 0xE0, 0x00, 0xF4, 0x0D, 0x01 };
unsigned char INSTRUMENT_ORGAN2[12]   PROGMEM = { 0x00, 0xF2, 0x00, 0xF6, 0x2C, 0x04, 0x00, 0xF0, 0x00, 0xF5, 0x0B, 0x01 };
unsigned char INSTRUMENT_ORGAN3[12]   PROGMEM = { 0x00, 0xF1, 0x06, 0xB6, 0x15, 0x0A, 0x00, 0xF0, 0x00, 0xBF, 0x07, 0x00 };
unsigned char INSTRUMENT_PIPEORG[12]  PROGMEM = { 0x00, 0x22, 0x03, 0x79, 0x16, 0x08, 0x01, 0xE0, 0x00, 0x6D, 0x08, 0x01 };
unsigned char INSTRUMENT_REEDORG[12]  PROGMEM = { 0x00, 0x31, 0x27, 0x63, 0x06, 0x01, 0x00, 0x72, 0x00, 0x51, 0x17, 0x01 };
unsigned char INSTRUMENT_ACORDIAN[12] PROGMEM = { 0x00, 0xB4, 0x1D, 0x53, 0x16, 0x0F, 0x01, 0x71, 0x00, 0x51, 0x17, 0x01 };
unsigned char INSTRUMENT_HARMONIC[12] PROGMEM = { 0x00, 0x25, 0x29, 0x97, 0x15, 0x01, 0x00, 0x32, 0x00, 0x53, 0x08, 0x01 };
unsigned char INSTRUMENT_BANDNEON[12] PROGMEM = { 0x00, 0x24, 0x9E, 0x67, 0x15, 0x0F, 0x00, 0x31, 0x00, 0x53, 0x06, 0x01 };
unsigned char INSTRUMENT_NYLONGT[12]  PROGMEM = { 0x00, 0x13, 0x27, 0xA3, 0xB4, 0x05, 0x01, 0x31, 0x00, 0xD2, 0xF8, 0x00 };
unsigned char INSTRUMENT_STEELGT[12]  PROGMEM = { 0x00, 0x17, 0xA3, 0xF3, 0x32, 0x01, 0x00, 0x11, 0x00, 0xE2, 0xC7, 0x01 };
unsigned char INSTRUMENT_JAZZGT[12]   PROGMEM = { 0x00, 0x33, 0x24, 0xD2, 0xC1, 0x0F, 0x01, 0x31, 0x00, 0xF1, 0x9C, 0x00 };
unsigned char INSTRUMENT_CLEANGT[12]  PROGMEM = { 0x00, 0x31, 0x05, 0xF8, 0x44, 0x01, 0x00, 0x32, 0x02, 0xF2, 0xC9, 0x01 };
unsigned char INSTRUMENT_MUTEGT[12]   PROGMEM = { 0x00, 0x21, 0x09, 0x9C, 0x7B, 0x07, 0x00, 0x02, 0x03, 0x95, 0xFB, 0x00 };
unsigned char INSTRUMENT_OVERDGT[12]  PROGMEM = { 0x00, 0x21, 0x84, 0x81, 0x98, 0x07, 0x01, 0x21, 0x04, 0xA1, 0x59, 0x00 };
unsigned char INSTRUMENT_DISTGT[12]   PROGMEM = { 0x00, 0xB1, 0x0C, 0x78, 0x43, 0x01, 0x00, 0x22, 0x03, 0x91, 0xFC, 0x03 };
unsigned char INSTRUMENT_GTHARMS[12]  PROGMEM = { 0x00, 0x00, 0x0A, 0x82, 0x8C, 0x09, 0x00, 0x08, 0x02, 0xB4, 0xEC, 0x00 };
unsigned char INSTRUMENT_ACOUBASS[12] PROGMEM = { 0x00, 0x21, 0x13, 0xAB, 0x46, 0x01, 0x00, 0x21, 0x00, 0x93, 0xF7, 0x00 };
unsigned char INSTRUMENT_FINGBASS[12] PROGMEM = { 0x00, 0x01, 0x0A, 0xF9, 0x32, 0x01, 0x00, 0x22, 0x04, 0xC1, 0x58, 0x00 };
unsigned char INSTRUMENT_PICKBASS[12] PROGMEM = { 0x00, 0x21, 0x07, 0xFA, 0x77, 0x0B, 0x00, 0x22, 0x02, 0xC3, 0x6A, 0x00 };
unsigned char INSTRUMENT_FRETLESS[12] PROGMEM = { 0x00, 0x21, 0x17, 0x71, 0x57, 0x0B, 0x00, 0x21, 0x00, 0x62, 0x87, 0x00 };
unsigned char INSTRUMENT_SLAPBAS1[12] PROGMEM = { 0x00, 0x25, 0x01, 0xFA, 0x78, 0x07, 0x01, 0x12, 0x00, 0xF3, 0x97, 0x00 };
unsigned char INSTRUMENT_SLAPBAS2[12] PROGMEM = { 0x00, 0x21, 0x03, 0xFA, 0x88, 0x0D, 0x00, 0x13, 0x00, 0xB3, 0x97, 0x00 };
unsigned char INSTRUMENT_SYNBASS1[12] PROGMEM = { 0x00, 0x21, 0x09, 0xF5, 0x7F, 0x09, 0x01, 0x23, 0x04, 0xF3, 0xCC, 0x00 };
unsigned char INSTRUMENT_SYNBASS2[12] PROGMEM = { 0x00, 0x01, 0x10, 0xA3, 0x9B, 0x09, 0x00, 0x01, 0x00, 0x93, 0xAA, 0x00 };
unsigned char INSTRUMENT_VIOLIN[12]   PROGMEM = { 0x00, 0xE2, 0x19, 0xF6, 0x29, 0x0D, 0x01, 0xE1, 0x00, 0x78, 0x08, 0x01 };
unsigned char INSTRUMENT_VIOLA[12]    PROGMEM = { 0x00, 0xE2, 0x1C, 0xF6, 0x29, 0x0D, 0x01, 0xE1, 0x00, 0x78, 0x08, 0x01 };
unsigned char INSTRUMENT_CELLO[12]    PROGMEM = { 0x00, 0x61, 0x19, 0x69, 0x16, 0x0B, 0x01, 0x61, 0x00, 0x54, 0x27, 0x01 };
unsigned char INSTRUMENT_CONTRAB[12]  PROGMEM = { 0x00, 0x71, 0x18, 0x82, 0x31, 0x0D, 0x01, 0x32, 0x00, 0x61, 0x56, 0x00 };
unsigned char INSTRUMENT_TREMSTR[12]  PROGMEM = { 0x00, 0xE2, 0x23, 0x70, 0x06, 0x0D, 0x01, 0xE1, 0x00, 0x75, 0x16, 0x01 };
unsigned char INSTRUMENT_PIZZ[12]     PROGMEM = { 0x00, 0x02, 0x00, 0x88, 0xE6, 0x08, 0x00, 0x61, 0x00, 0xF5, 0xF6, 0x01 };
unsigned char INSTRUMENT_HARP[12]     PROGMEM = { 0x00, 0x12, 0x20, 0xF6, 0xD5, 0x0F, 0x01, 0x11, 0x80, 0xF3, 0xE3, 0x00 };
unsigned char INSTRUMENT_TIMPANI[12]  PROGMEM = { 0x00, 0x61, 0x0E, 0xF4, 0xF4, 0x01, 0x01, 0x00, 0x00, 0xB5, 0xF5, 0x00 };
unsigned char INSTRUMENT_STRINGS[12]  PROGMEM = { 0x00, 0x61, 0x1E, 0x9C, 0x04, 0x0F, 0x01, 0x21, 0x80, 0x71, 0x16, 0x00 };
unsigned char INSTRUMENT_SLOWSTR[12]  PROGMEM = { 0x00, 0xA2, 0x2A, 0xC0, 0xD6, 0x0F, 0x02, 0x21, 0x00, 0x30, 0x55, 0x01 };
unsigned char INSTRUMENT_SYNSTR1[12]  PROGMEM = { 0x00, 0x61, 0x21, 0x72, 0x35, 0x0F, 0x01, 0x61, 0x00, 0x62, 0x36, 0x01 };
unsigned char INSTRUMENT_SYNSTR2[12]  PROGMEM = { 0x00, 0x21, 0x1A, 0x72, 0x23, 0x0F, 0x01, 0x21, 0x02, 0x51, 0x07, 0x00 };
unsigned char INSTRUMENT_CHOIR[12]    PROGMEM = { 0x00, 0xE1, 0x16, 0x97, 0x31, 0x09, 0x00, 0x61, 0x00, 0x62, 0x39, 0x00 };
unsigned char INSTRUMENT_OOHS[12]     PROGMEM = { 0x00, 0x22, 0xC3, 0x79, 0x45, 0x01, 0x00, 0x21, 0x00, 0x66, 0x27, 0x00 };
unsigned char INSTRUMENT_SYNVOX[12]   PROGMEM = { 0x00, 0x21, 0xDE, 0x63, 0x55, 0x01, 0x01, 0x21, 0x00, 0x73, 0x46, 0x00 };
unsigned char INSTRUMENT_ORCHIT[12]   PROGMEM = { 0x00, 0x42, 0x05, 0x86, 0xF7, 0x0A, 0x00, 0x50, 0x00, 0x74, 0x76, 0x01 };
unsigned char INSTRUMENT_TRUMPET[12]  PROGMEM = { 0x00, 0x31, 0x1C, 0x61, 0x02, 0x0F, 0x00, 0x61, 0x81, 0x92, 0x38, 0x00 };
unsigned char INSTRUMENT_TROMBONE[12] PROGMEM = { 0x00, 0x71, 0x1E, 0x52, 0x23, 0x0F, 0x00, 0x61, 0x02, 0x71, 0x19, 0x00 };
unsigned char INSTRUMENT_TUBA[12]     PROGMEM = { 0x00, 0x21, 0x1A, 0x76, 0x16, 0x0F, 0x00, 0x21, 0x01, 0x81, 0x09, 0x00 };
unsigned char INSTRUMENT_MUTETRP[12]  PROGMEM = { 0x00, 0x25, 0x28, 0x89, 0x2C, 0x07, 0x02, 0x20, 0x00, 0x83, 0x4B, 0x02 };
unsigned char INSTRUMENT_FRHORN[12]   PROGMEM = { 0x00, 0x21, 0x1F, 0x79, 0x16, 0x09, 0x00, 0xA2, 0x05, 0x71, 0x59, 0x00 };
unsigned char INSTRUMENT_BRASS1[12]   PROGMEM = { 0x00, 0x21, 0x19, 0x87, 0x16, 0x0F, 0x00, 0x21, 0x03, 0x82, 0x39, 0x00 };
unsigned char INSTRUMENT_SYNBRAS1[12] PROGMEM = { 0x00, 0x21, 0x17, 0x75, 0x35, 0x0F, 0x00, 0x22, 0x82, 0x84, 0x17, 0x00 };
unsigned char INSTRUMENT_SYNBRAS2[12] PROGMEM = { 0x00, 0x21, 0x22, 0x62, 0x58, 0x0F, 0x00, 0x21, 0x02, 0x72, 0x16, 0x00 };
unsigned char INSTRUMENT_SOPSAX[12]   PROGMEM = { 0x00, 0xB1, 0x1B, 0x59, 0x07, 0x01, 0x01, 0xA1, 0x00, 0x7B, 0x0A, 0x00 };
unsigned char INSTRUMENT_ALTOSAX[12]  PROGMEM = { 0x00, 0x21, 0x16, 0x9F, 0x04, 0x0B, 0x00, 0x21, 0x00, 0x85, 0x0C, 0x01 };
unsigned char INSTRUMENT_TENSAX[12]   PROGMEM = { 0x00, 0x21, 0x0F, 0xA8, 0x20, 0x0D, 0x00, 0x23, 0x00, 0x7B, 0x0A, 0x01 };
unsigned char INSTRUMENT_BARISAX[12]  PROGMEM = { 0x00, 0x21, 0x0F, 0x88, 0x04, 0x09, 0x00, 0x26, 0x00, 0x79, 0x18, 0x01 };
unsigned char INSTRUMENT_OBOE[12]     PROGMEM = { 0x00, 0x31, 0x18, 0x8F, 0x05, 0x01, 0x00, 0x32, 0x01, 0x73, 0x08, 0x00 };
unsigned char INSTRUMENT_ENGLHORN[12] PROGMEM = { 0x00, 0xA1, 0x0A, 0x8C, 0x37, 0x01, 0x01, 0x24, 0x04, 0x77, 0x0A, 0x00 };
unsigned char INSTRUMENT_BASSOON[12]  PROGMEM = { 0x00, 0x31, 0x04, 0xA8, 0x67, 0x0B, 0x00, 0x75, 0x00, 0x51, 0x19, 0x00 };
unsigned char INSTRUMENT_CLARINET[12] PROGMEM = { 0x00, 0xA2, 0x1F, 0x77, 0x26, 0x01, 0x01, 0x21, 0x01, 0x74, 0x09, 0x00 };
unsigned char INSTRUMENT_PICCOLO[12]  PROGMEM = { 0x00, 0xE1, 0x07, 0xB8, 0x94, 0x01, 0x01, 0x21, 0x01, 0x63, 0x28, 0x00 };
unsigned char INSTRUMENT_FLUTE1[12]   PROGMEM = { 0x00, 0xA1, 0x93, 0x87, 0x59, 0x01, 0x00, 0xE1, 0x00, 0x65, 0x0A, 0x00 };
unsigned char INSTRUMENT_RECORDER[12] PROGMEM = { 0x00, 0x22, 0x10, 0x9F, 0x38, 0x01, 0x00, 0x61, 0x00, 0x67, 0x29, 0x00 };
unsigned char INSTRUMENT_PANFLUTE[12] PROGMEM = { 0x00, 0xE2, 0x0D, 0x88, 0x9A, 0x01, 0x01, 0x21, 0x00, 0x67, 0x09, 0x00 };
unsigned char INSTRUMENT_BOTTLEB[12]  PROGMEM = { 0x00, 0xA2, 0x10, 0x98, 0x94, 0x0F, 0x00, 0x21, 0x01, 0x6A, 0x28, 0x00 };
unsigned char INSTRUMENT_SHAKU[12]    PROGMEM = { 0x00, 0xF1, 0x1C, 0x86, 0x26, 0x0F, 0x00, 0xF1, 0x00, 0x55, 0x27, 0x00 };
unsigned char INSTRUMENT_WHISTLE[12]  PROGMEM = { 0x00, 0xE1, 0x3F, 0x9F, 0x09, 0x00, 0x00, 0xE1, 0x00, 0x6F, 0x08, 0x00 };
unsigned char INSTRUMENT_OCARINA[12]  PROGMEM = { 0x00, 0xE2, 0x3B, 0xF7, 0x19, 0x01, 0x00, 0x21, 0x00, 0x7A, 0x07, 0x00 };
unsigned char INSTRUMENT_SQUARWAV[12] PROGMEM = { 0x00, 0x22, 0x1E, 0x92, 0x0C, 0x0F, 0x00, 0x61, 0x06, 0xA2, 0x0D, 0x00 };
unsigned char INSTRUMENT_SAWWAV[12]   PROGMEM = { 0x00, 0x21, 0x15, 0xF4, 0x22, 0x0F, 0x01, 0x21, 0x00, 0xA3, 0x5F, 0x00 };
unsigned char INSTRUMENT_SYNCALLI[12] PROGMEM = { 0x00, 0xF2, 0x20, 0x47, 0x66, 0x03, 0x01, 0xF1, 0x00, 0x42, 0x27, 0x00 };
unsigned char INSTRUMENT_CHIFLEAD[12] PROGMEM = { 0x00, 0x61, 0x19, 0x88, 0x28, 0x0F, 0x00, 0x61, 0x05, 0xB2, 0x49, 0x00 };
unsigned char INSTRUMENT_CHARANG[12]  PROGMEM = { 0x00, 0x21, 0x16, 0x82, 0x1B, 0x01, 0x00, 0x23, 0x00, 0xB2, 0x79, 0x01 };
unsigned char INSTRUMENT_SOLOVOX[12]  PROGMEM = { 0x00, 0x21, 0x00, 0xCA, 0x93, 0x01, 0x00, 0x22, 0x00, 0x7A, 0x1A, 0x00 };
unsigned char INSTRUMENT_FIFTHSAW[12] PROGMEM = { 0x00, 0x23, 0x00, 0x92, 0xC9, 0x08, 0x01, 0x22, 0x00, 0x82, 0x28, 0x01 };
unsigned char INSTRUMENT_BASSLEAD[12] PROGMEM = { 0x00, 0x21, 0x1D, 0xF3, 0x7B, 0x0F, 0x00, 0x22, 0x02, 0xC3, 0x5F, 0x00 };
unsigned char INSTRUMENT_FANTASIA[12] PROGMEM = { 0x00, 0xE1, 0x00, 0x81, 0x25, 0x00, 0x01, 0xA6, 0x86, 0xC4, 0x95, 0x01 };
unsigned char INSTRUMENT_WARMPAD[12]  PROGMEM = { 0x00, 0x21, 0x27, 0x31, 0x01, 0x0F, 0x00, 0x21, 0x00, 0x44, 0x15, 0x00 };
unsigned char INSTRUMENT_POLYSYN[12]  PROGMEM = { 0x00, 0x60, 0x14, 0x83, 0x35, 0x0D, 0x02, 0x61, 0x00, 0xD1, 0x06, 0x00 };
unsigned char INSTRUMENT_SPACEVOX[12] PROGMEM = { 0x00, 0xE1, 0x5C, 0xD3, 0x01, 0x01, 0x01, 0x62, 0x00, 0x82, 0x37, 0x00 };
unsigned char INSTRUMENT_BOWEDGLS[12] PROGMEM = { 0x00, 0x28, 0x38, 0x34, 0x86, 0x01, 0x02, 0x21, 0x00, 0x41, 0x35, 0x00 };
unsigned char INSTRUMENT_METALPAD[12] PROGMEM = { 0x00, 0x24, 0x12, 0x52, 0xF3, 0x05, 0x01, 0x23, 0x02, 0x32, 0xF5, 0x01 };
unsigned char INSTRUMENT_HALOPAD[12]  PROGMEM = { 0x00, 0x61, 0x1D, 0x62, 0xA6, 0x0B, 0x00, 0xA1, 0x00, 0x61, 0x26, 0x00 };
unsigned char INSTRUMENT_SWEEPPAD[12] PROGMEM = { 0x00, 0x22, 0x0F, 0x22, 0xD5, 0x0B, 0x01, 0x21, 0x84, 0x3F, 0x05, 0x01 };
unsigned char INSTRUMENT_ICERAIN[12]  PROGMEM = { 0x00, 0xE3, 0x1F, 0xF9, 0x24, 0x01, 0x00, 0x31, 0x01, 0xD1, 0xF6, 0x00 };
unsigned char INSTRUMENT_SOUNDTRK[12] PROGMEM = { 0x00, 0x63, 0x00, 0x41, 0x55, 0x06, 0x01, 0xA2, 0x00, 0x41, 0x05, 0x01 };
unsigned char INSTRUMENT_CRYSTAL[12]  PROGMEM = { 0x00, 0xC7, 0x25, 0xA7, 0x65, 0x01, 0x01, 0xC1, 0x05, 0xF3, 0xE4, 0x00 };
unsigned char INSTRUMENT_ATMOSPH[12]  PROGMEM = { 0x00, 0xE3, 0x19, 0xF7, 0xB7, 0x01, 0x01, 0x61, 0x00, 0x92, 0xF5, 0x01 };
unsigned char INSTRUMENT_BRIGHT[12]   PROGMEM = { 0x00, 0x66, 0x9B, 0xA8, 0x44, 0x0F, 0x00, 0x41, 0x04, 0xF2, 0xE4, 0x01 };
unsigned char INSTRUMENT_GOBLIN[12]   PROGMEM = { 0x00, 0x61, 0x20, 0x22, 0x75, 0x0D, 0x00, 0x61, 0x00, 0x45, 0x25, 0x00 };
unsigned char INSTRUMENT_ECHODROP[12] PROGMEM = { 0x00, 0xE1, 0x21, 0xF6, 0x84, 0x0F, 0x00, 0xE1, 0x01, 0xA3, 0x36, 0x00 };
unsigned char INSTRUMENT_STARTHEM[12] PROGMEM = { 0x00, 0xE2, 0x14, 0x73, 0x64, 0x0B, 0x01, 0xE1, 0x01, 0x98, 0x05, 0x01 };
unsigned char INSTRUMENT_SITAR[12]    PROGMEM = { 0x00, 0x21, 0x0B, 0x72, 0x34, 0x09, 0x00, 0x24, 0x02, 0xA3, 0xF6, 0x01 };
unsigned char INSTRUMENT_BANJO[12]    PROGMEM = { 0x00, 0x21, 0x16, 0xF4, 0x53, 0x0D, 0x00, 0x04, 0x00, 0xF6, 0xF8, 0x00 };
unsigned char INSTRUMENT_SHAMISEN[12] PROGMEM = { 0x00, 0x21, 0x18, 0xDA, 0x02, 0x0D, 0x00, 0x35, 0x00, 0xF3, 0xF5, 0x00 };
unsigned char INSTRUMENT_KOTO[12]     PROGMEM = { 0x00, 0x25, 0x0F, 0xFA, 0x63, 0x09, 0x00, 0x02, 0x00, 0x94, 0xE5, 0x01 };
unsigned char INSTRUMENT_KALIMBA[12]  PROGMEM = { 0x00, 0x32, 0x07, 0xF9, 0x96, 0x01, 0x00, 0x11, 0x00, 0x84, 0x44, 0x00 };
unsigned char INSTRUMENT_BAGPIPE[12]  PROGMEM = { 0x00, 0x20, 0x0E, 0x97, 0x18, 0x09, 0x02, 0x25, 0x03, 0x83, 0x18, 0x01 };
unsigned char INSTRUMENT_FIDDLE[12]   PROGMEM = { 0x00, 0x61, 0x18, 0xF6, 0x29, 0x01, 0x00, 0x62, 0x01, 0x78, 0x08, 0x01 };
unsigned char INSTRUMENT_SHANNAI[12]  PROGMEM = { 0x00, 0xE6, 0x21, 0x76, 0x19, 0x0B, 0x00, 0x61, 0x03, 0x8E, 0x08, 0x01 };
unsigned char INSTRUMENT_TINKLBEL[12] PROGMEM = { 0x00, 0x27, 0x23, 0xF0, 0xD4, 0x01, 0x00, 0x05, 0x09, 0xF2, 0x46, 0x00 };
unsigned char INSTRUMENT_AGOGO[12]    PROGMEM = { 0x00, 0x1C, 0x0C, 0xF9, 0x31, 0x0F, 0x01, 0x15, 0x00, 0x96, 0xE8, 0x01 };
unsigned char INSTRUMENT_STEELDRM[12] PROGMEM = { 0x00, 0x02, 0x00, 0x75, 0x16, 0x06, 0x02, 0x01, 0x00, 0xF6, 0xF6, 0x01 };
unsigned char INSTRUMENT_WOODBLOK[12] PROGMEM = { 0x00, 0x25, 0x1B, 0xFA, 0xF2, 0x01, 0x00, 0x12, 0x00, 0xF6, 0x9A, 0x00 };
unsigned char INSTRUMENT_TAIKO[12]    PROGMEM = { 0x00, 0x02, 0x1D, 0xF5, 0x93, 0x01, 0x00, 0x00, 0x00, 0xC6, 0x45, 0x00 };
unsigned char INSTRUMENT_MELOTOM[12]  PROGMEM = { 0x00, 0x11, 0x15, 0xF5, 0x32, 0x05, 0x00, 0x10, 0x00, 0xF4, 0xB4, 0x00 };
unsigned char INSTRUMENT_SYNDRUM[12]  PROGMEM = { 0x00, 0x22, 0x06, 0xFA, 0x99, 0x09, 0x00, 0x01, 0x00, 0xD5, 0x25, 0x00 };
unsigned char INSTRUMENT_REVRSCYM[12] PROGMEM = { 0x00, 0x2E, 0x00, 0xFF, 0x00, 0x0F, 0x02, 0x0E, 0x0E, 0x21, 0x2D, 0x00 };
unsigned char INSTRUMENT_FRETNOIS[12] PROGMEM = { 0x00, 0x30, 0x0B, 0x56, 0xE4, 0x01, 0x01, 0x17, 0x00, 0x55, 0x87, 0x02 };
unsigned char INSTRUMENT_BRTHNOIS[12] PROGMEM = { 0x00, 0x24, 0x00, 0xFF, 0x03, 0x0D, 0x00, 0x05, 0x08, 0x98, 0x87, 0x01 };
unsigned char INSTRUMENT_SEASHORE[12] PROGMEM = { 0x00, 0x0E, 0x00, 0xF0, 0x00, 0x0F, 0x02, 0x0A, 0x04, 0x17, 0x04, 0x03 };
unsigned char INSTRUMENT_BIRDS[12]    PROGMEM = { 0x00, 0x20, 0x08, 0xF6, 0xF7, 0x01, 0x00, 0x0E, 0x05, 0x77, 0xF9, 0x02 };
unsigned char INSTRUMENT_TELEPHON[12] PROGMEM = { 0x00, 0x20, 0x14, 0xF1, 0x08, 0x01, 0x00, 0x2E, 0x02, 0xF4, 0x08, 0x00 };
unsigned char INSTRUMENT_HELICOPT[12] PROGMEM = { 0x00, 0x20, 0x04, 0xF2, 0x00, 0x03, 0x01, 0x23, 0x00, 0x36, 0x05, 0x01 };
unsigned char INSTRUMENT_APPLAUSE[12] PROGMEM = { 0x00, 0x2E, 0x00, 0xFF, 0x02, 0x0F, 0x00, 0x2A, 0x05, 0x32, 0x55, 0x03 };
unsigned char INSTRUMENT_GUNSHOT[12]  PROGMEM = { 0x00, 0x20, 0x00, 0xA1, 0xEF, 0x0F, 0x00, 0x10, 0x00, 0xF3, 0xDF, 0x00 };


// Instrument pointer array to access instruments by MIDI program.
unsigned char *midiInstruments[] = {
	INSTRUMENT_PIANO1,   INSTRUMENT_PIANO2,   INSTRUMENT_PIANO3,   INSTRUMENT_HONKTONK, INSTRUMENT_EP1,      INSTRUMENT_EP2,
	INSTRUMENT_HARPSIC,  INSTRUMENT_CLAVIC,   INSTRUMENT_CELESTA,  INSTRUMENT_GLOCK,    INSTRUMENT_MUSICBOX, INSTRUMENT_VIBES,
	INSTRUMENT_MARIMBA,  INSTRUMENT_XYLO,     INSTRUMENT_TUBEBELL, INSTRUMENT_SANTUR,   INSTRUMENT_ORGAN1,   INSTRUMENT_ORGAN2,
	INSTRUMENT_ORGAN3,   INSTRUMENT_PIPEORG,  INSTRUMENT_REEDORG,  INSTRUMENT_ACORDIAN, INSTRUMENT_HARMONIC, INSTRUMENT_BANDNEON,
	INSTRUMENT_NYLONGT,  INSTRUMENT_STEELGT,  INSTRUMENT_JAZZGT,   INSTRUMENT_CLEANGT,  INSTRUMENT_MUTEGT,   INSTRUMENT_OVERDGT,
	INSTRUMENT_DISTGT,   INSTRUMENT_GTHARMS,  INSTRUMENT_ACOUBASS, INSTRUMENT_FINGBASS, INSTRUMENT_PICKBASS, INSTRUMENT_FRETLESS,
	INSTRUMENT_SLAPBAS1, INSTRUMENT_SLAPBAS2, INSTRUMENT_SYNBASS1, INSTRUMENT_SYNBASS2, INSTRUMENT_VIOLIN,   INSTRUMENT_VIOLA,
	INSTRUMENT_CELLO,    INSTRUMENT_CONTRAB,  INSTRUMENT_TREMSTR,  INSTRUMENT_PIZZ,     INSTRUMENT_HARP,     INSTRUMENT_TIMPANI,
	INSTRUMENT_STRINGS,  INSTRUMENT_SLOWSTR,  INSTRUMENT_SYNSTR1,  INSTRUMENT_SYNSTR2,  INSTRUMENT_CHOIR,    INSTRUMENT_OOHS,
	INSTRUMENT_SYNVOX,   INSTRUMENT_ORCHIT,   INSTRUMENT_TRUMPET,  INSTRUMENT_TROMBONE, INSTRUMENT_TUBA,     INSTRUMENT_MUTETRP,
	INSTRUMENT_FRHORN,   INSTRUMENT_BRASS1,   INSTRUMENT_SYNBRAS1, INSTRUMENT_SYNBRAS2, INSTRUMENT_SOPSAX,   INSTRUMENT_ALTOSAX,
	INSTRUMENT_TENSAX,   INSTRUMENT_BARISAX,  INSTRUMENT_OBOE,     INSTRUMENT_ENGLHORN, INSTRUMENT_BASSOON,  INSTRUMENT_CLARINET,
	INSTRUMENT_PICCOLO,  INSTRUMENT_FLUTE1,   INSTRUMENT_RECORDER, INSTRUMENT_PANFLUTE, INSTRUMENT_BOTTLEB,  INSTRUMENT_SHAKU,
	INSTRUMENT_WHISTLE,  INSTRUMENT_OCARINA,  INSTRUMENT_SQUARWAV, INSTRUMENT_SAWWAV,   INSTRUMENT_SYNCALLI, INSTRUMENT_CHIFLEAD,
	INSTRUMENT_CHARANG,  INSTRUMENT_SOLOVOX,  INSTRUMENT_FIFTHSAW, INSTRUMENT_BASSLEAD, INSTRUMENT_FANTASIA, INSTRUMENT_WARMPAD,
	INSTRUMENT_POLYSYN,  INSTRUMENT_SPACEVOX, INSTRUMENT_BOWEDGLS, INSTRUMENT_METALPAD, INSTRUMENT_HALOPAD,  INSTRUMENT_SWEEPPAD,
	INSTRUMENT_ICERAIN,  INSTRUMENT_SOUNDTRK, INSTRUMENT_CRYSTAL,  INSTRUMENT_ATMOSPH,  INSTRUMENT_BRIGHT,   INSTRUMENT_GOBLIN,
	INSTRUMENT_ECHODROP, INSTRUMENT_STARTHEM, INSTRUMENT_SITAR,    INSTRUMENT_BANJO,    INSTRUMENT_SHAMISEN, INSTRUMENT_KOTO,
	INSTRUMENT_KALIMBA,  INSTRUMENT_BAGPIPE,  INSTRUMENT_FIDDLE,   INSTRUMENT_SHANNAI,  INSTRUMENT_TINKLBEL, INSTRUMENT_AGOGO,
	INSTRUMENT_STEELDRM, INSTRUMENT_WOODBLOK, INSTRUMENT_TAIKO,    INSTRUMENT_MELOTOM,  INSTRUMENT_SYNDRUM,  INSTRUMENT_REVRSCYM,
	INSTRUMENT_FRETNOIS, INSTRUMENT_BRTHNOIS, INSTRUMENT_SEASHORE, INSTRUMENT_BIRDS,    INSTRUMENT_TELEPHON, INSTRUMENT_HELICOPT,
	INSTRUMENT_APPLAUSE, INSTRUMENT_GUNSHOT
};
