//Reference by micom car rally net
//http://j-mcr.net/tech/r8cm12a/main013.html

const char font[][8] = {
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},   // 0x20 '　'
{0x00,0x00,0x00,0x5f,0x00,0x00,0x00,0x00},   // 0x21 '！'
{0x05,0x03,0x00,0x05,0x03,0x00,0x00,0x00},   // 0x22 '”'
{0x20,0x62,0x3e,0x63,0x3e,0x23,0x02,0x00},   // 0x23 '＃'
{0x00,0x24,0x2a,0x7a,0x2f,0x2a,0x12,0x00},   // 0x24 '＄'
{0x42,0x25,0x12,0x08,0x24,0x52,0x21,0x00},   // 0x25 '％'
{0x20,0x56,0x49,0x55,0x22,0x58,0x40,0x00},   // 0x26 '＆'
{0x04,0x03,0x00,0x00,0x00,0x00,0x00,0x00},   // 0x27 '’'
{0x00,0x00,0x00,0x3e,0x22,0x41,0x41,0x00},   // 0x28 '（'
{0x41,0x41,0x22,0x3e,0x00,0x00,0x00,0x00},   // 0x29 '）'
{0x00,0x22,0x14,0x7f,0x14,0x22,0x00,0x00},   // 0x2a '＊'
{0x08,0x08,0x08,0x7f,0x08,0x08,0x08,0x00},   // 0x2b '＋'
{0x50,0x30,0x00,0x00,0x00,0x00,0x00,0x00},   // 0x2c '，'
{0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08},   // 0x2d '－'
{0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00},   // 0x2e '．'
{0x40,0x20,0x10,0x08,0x04,0x02,0x01,0x00},   // 0x2f '／'
{0x00,0x3e,0x41,0x41,0x41,0x41,0x3e,0x00},   // 0x30 '０'
{0x00,0x00,0x42,0x7f,0x40,0x00,0x00,0x00},   // 0x31 '１'
{0x00,0x62,0x51,0x51,0x49,0x49,0x46,0x00},   // 0x32 '２'
{0x00,0x22,0x41,0x49,0x49,0x49,0x36,0x00},   // 0x33 '３'
{0x00,0x30,0x28,0x24,0x22,0x7f,0x20,0x00},   // 0x34 '４'
{0x00,0x2f,0x45,0x45,0x45,0x45,0x39,0x00},   // 0x35 '５'
{0x00,0x3e,0x49,0x49,0x49,0x49,0x32,0x00},   // 0x36 '６'
{0x00,0x01,0x01,0x61,0x19,0x05,0x03,0x00},   // 0x37 '７'
{0x00,0x36,0x49,0x49,0x49,0x49,0x36,0x00},   // 0x38 '８'
{0x00,0x26,0x49,0x49,0x49,0x49,0x3e,0x00},   // 0x39 '９'
{0x00,0x00,0x36,0x36,0x00,0x00,0x00,0x00},   // 0x3a '：'
{0x00,0x00,0x56,0x36,0x00,0x00,0x00,0x00},   // 0x3b '；'
{0x00,0x00,0x00,0x08,0x14,0x22,0x41,0x00},   // 0x3c '＜'
{0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x00},   // 0x3d '＝'
{0x41,0x22,0x14,0x08,0x00,0x00,0x00,0x00},   // 0x3e '＞'
{0x00,0x02,0x01,0x51,0x09,0x09,0x06,0x00},   // 0x3f '？'
{0x1c,0x22,0x59,0x55,0x4d,0x12,0x0c,0x00},   // 0x40 '＠'
{0x60,0x18,0x16,0x11,0x16,0x18,0x60,0x00},   // 0x41 'Ａ'
{0x00,0x7f,0x49,0x49,0x49,0x49,0x36,0x00},   // 0x42 'Ｂ'
{0x00,0x1c,0x22,0x41,0x41,0x41,0x22,0x00},   // 0x43 'Ｃ'
{0x00,0x7f,0x41,0x41,0x41,0x22,0x1c,0x00},   // 0x44 'Ｄ'
{0x00,0x7f,0x49,0x49,0x49,0x49,0x41,0x00},   // 0x45 'Ｅ'
{0x00,0x7f,0x09,0x09,0x09,0x09,0x01,0x00},   // 0x46 'Ｆ'
{0x00,0x1c,0x22,0x41,0x49,0x49,0x3a,0x00},   // 0x47 'Ｇ'
{0x00,0x7f,0x08,0x08,0x08,0x08,0x7f,0x00},   // 0x48 'Ｈ'
{0x00,0x00,0x41,0x7f,0x41,0x00,0x00,0x00},   // 0x49 'Ｉ'
{0x00,0x20,0x40,0x40,0x40,0x40,0x3f,0x00},   // 0x4a 'Ｊ'
{0x00,0x7f,0x10,0x08,0x14,0x22,0x41,0x00},   // 0x4b 'Ｋ'
{0x00,0x7f,0x40,0x40,0x40,0x40,0x40,0x00},   // 0x4c 'Ｌ'
{0x7f,0x02,0x0c,0x30,0x0c,0x02,0x7f,0x00},   // 0x4d 'Ｍ'
{0x00,0x7f,0x02,0x04,0x08,0x10,0x7f,0x00},   // 0x4e 'Ｎ'
{0x00,0x1c,0x22,0x41,0x41,0x22,0x1c,0x00},   // 0x4f 'Ｏ'
{0x00,0x7f,0x09,0x09,0x09,0x09,0x06,0x00},   // 0x50 'Ｐ'
{0x00,0x1c,0x22,0x41,0x51,0x22,0x5c,0x00},   // 0x51 'Ｑ'
{0x00,0x7f,0x09,0x09,0x19,0x29,0x46,0x00},   // 0x52 'Ｒ'
{0x00,0x26,0x49,0x49,0x49,0x49,0x32,0x00},   // 0x53 'Ｓ'
{0x01,0x01,0x01,0x7f,0x01,0x01,0x01,0x00},   // 0x54 'Ｔ'
{0x00,0x3f,0x40,0x40,0x40,0x40,0x3f,0x00},   // 0x55 'Ｕ'
{0x03,0x0c,0x30,0x40,0x30,0x0c,0x03,0x00},   // 0x56 'Ｖ'
{0x1f,0x60,0x18,0x06,0x18,0x60,0x1f,0x00},   // 0x57 'Ｗ'
{0x41,0x22,0x14,0x08,0x14,0x22,0x41,0x00},   // 0x58 'Ｘ'
{0x01,0x02,0x04,0x78,0x04,0x02,0x01,0x00},   // 0x59 'Ｙ'
{0x00,0x41,0x61,0x51,0x49,0x45,0x43,0x00},   // 0x5a 'Ｚ'
{0x00,0x00,0x00,0x00,0x7f,0x41,0x41,0x00},   // 0x5b '［'
{0x00,0x2b,0x2c,0x78,0x2c,0x2b,0x00,0x00},   // 0x5c '￥'
{0x41,0x41,0x7f,0x00,0x00,0x00,0x00,0x00},   // 0x5d '］'
{0x00,0x00,0x02,0x01,0x02,0x00,0x00,0x00},   // 0x5e '＾'
{0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00},   // 0x5f '＿'
{0x05,0x03,0x00,0x00,0x00,0x00,0x00,0x00},   // 0x60 '｀'
{0x00,0x20,0x54,0x54,0x54,0x78,0x00,0x00},   // 0x61 'ａ'
{0x00,0x7f,0x48,0x44,0x44,0x38,0x00,0x00},   // 0x62 'ｂ'
{0x00,0x38,0x44,0x44,0x44,0x28,0x00,0x00},   // 0x63 'ｃ'
{0x00,0x38,0x44,0x44,0x48,0x7f,0x00,0x00},   // 0x64 'ｄ'
{0x00,0x38,0x54,0x54,0x54,0x18,0x00,0x00},   // 0x65 'ｅ'
{0x00,0x00,0x04,0x7e,0x05,0x01,0x00,0x00},   // 0x66 'ｆ'
{0x00,0x08,0x54,0x54,0x54,0x3c,0x00,0x00},   // 0x67 'ｇ'
{0x00,0x7f,0x08,0x04,0x04,0x78,0x00,0x00},   // 0x68 'ｈ'
{0x00,0x00,0x00,0x7d,0x00,0x00,0x00,0x00},   // 0x69 'ｉ'
{0x00,0x20,0x40,0x40,0x3d,0x00,0x00,0x00},   // 0x6a 'ｊ'
{0x00,0x00,0x7f,0x10,0x28,0x44,0x00,0x00},   // 0x6b 'ｋ'
{0x00,0x00,0x01,0x7f,0x00,0x00,0x00,0x00},   // 0x6c 'ｌ'
{0x00,0x7c,0x04,0x78,0x04,0x78,0x00,0x00},   // 0x6d 'ｍ'
{0x00,0x7c,0x08,0x04,0x04,0x78,0x00,0x00},   // 0x6e 'ｎ'
{0x00,0x38,0x44,0x44,0x44,0x38,0x00,0x00},   // 0x6f 'ｏ'
{0x00,0x7c,0x14,0x14,0x14,0x08,0x00,0x00},   // 0x70 'ｐ'
{0x00,0x08,0x14,0x14,0x14,0x7c,0x00,0x00},   // 0x71 'ｑ'
{0x00,0x7c,0x08,0x04,0x04,0x08,0x00,0x00},   // 0x72 'ｒ'
{0x00,0x48,0x54,0x54,0x54,0x24,0x00,0x00},   // 0x73 'ｓ'
{0x00,0x04,0x3e,0x44,0x44,0x20,0x00,0x00},   // 0x74 'ｔ'
{0x00,0x3c,0x40,0x40,0x20,0x7c,0x00,0x00},   // 0x75 'ｕ'
{0x00,0x0c,0x30,0x40,0x30,0x0c,0x00,0x00},   // 0x76 'ｖ'
{0x00,0x1c,0x60,0x18,0x60,0x1c,0x00,0x00},   // 0x77 'ｗ'
{0x00,0x44,0x28,0x10,0x28,0x44,0x00,0x00},   // 0x78 'ｘ'
{0x00,0x44,0x58,0x20,0x18,0x04,0x00,0x00},   // 0x79 'ｙ'
{0x00,0x44,0x64,0x54,0x4c,0x44,0x00,0x00},   // 0x7a 'ｚ'
{0x00,0x00,0x00,0x08,0x36,0x41,0x41,0x00},   // 0x7b '｛'
{0x00,0x00,0x00,0x7f,0x00,0x00,0x00,0x00},   // 0x7c '｜'
{0x41,0x41,0x36,0x08,0x00,0x00,0x00,0x00},   // 0x7d '｝'
{0x08,0x04,0x04,0x08,0x10,0x10,0x08,0x00},   // 0x7e '～'
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},   // 0x7f '　'
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},   // 0x80 '　'
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},   // 0x81 '　'
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},   // 0x82 '　'
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},   // 0x83 '　'
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},   // 0x84 '　'
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},   // 0x85 '　'
{0x10,0x0a,0x2e,0x5b,0x72,0x4a,0x48,0x00},   // 0x86 'を'(独自)
{0x00,0x20,0x54,0x7e,0x34,0x14,0x60,0x00},   // 0x87 'ぁ'(独自)
{0x00,0x3c,0x40,0x20,0x04,0x18,0x00,0x00},   // 0x88 'ぃ'(独自)
{0x00,0x10,0x4a,0x4a,0x2a,0x10,0x00,0x00},   // 0x89 'ぅ'(独自)
{0x00,0x48,0x2a,0x3a,0x4a,0x40,0x00,0x00},   // 0x8a 'ぇ'(独自)
{0x00,0x24,0x7e,0x14,0x50,0x24,0x00,0x00},   // 0x8b 'ぉ'(独自)
{0x00,0x08,0x0e,0x38,0x46,0x14,0x08,0x00},   // 0x8c 'ゃ'(独自)
{0x00,0x1c,0x48,0x3e,0x24,0x18,0x00,0x00},   // 0x8d 'ゅ'(独自)
{0x00,0x20,0x50,0x50,0x3e,0x48,0x00,0x00},   // 0x8e 'ょ'(独自)
{0x00,0x10,0x10,0x48,0x48,0x30,0x00,0x00},   // 0x8f 'っ'(独自)
{0x04,0x08,0x08,0x08,0x08,0x08,0x08,0x00},   // 0x90 'ー'(独自)
{0x20,0x52,0x7f,0x2a,0x1a,0x4a,0x30,0x00},   // 0x91 'あ'(独自)
{0x1e,0x20,0x40,0x20,0x02,0x04,0x18,0x00},   // 0x92 'い'(独自)
{0x00,0x08,0x45,0x45,0x45,0x25,0x18,0x00},   // 0x93 'う'(独自)
{0x00,0x44,0x25,0x15,0x3d,0x45,0x40,0x00},   // 0x94 'え'(独自)
{0x22,0x52,0x7f,0x0a,0x48,0x4a,0x34,0x00},   // 0x95 'お'(独自)
{0x44,0x34,0x4f,0x44,0x38,0x04,0x18,0x00},   // 0x96 'か'(独自)
{0x00,0x2a,0x5a,0x4b,0x4e,0x5a,0x08,0x00},   // 0x97 'き'(独自)
{0x00,0x08,0x14,0x14,0x22,0x41,0x00,0x00},   // 0x98 'く'(独自)
{0x3f,0x00,0x04,0x44,0x3f,0x04,0x04,0x00},   // 0x99 'け'(独自)
{0x00,0x20,0x52,0x42,0x42,0x42,0x40,0x00},   // 0x9a 'こ'(独自)
{0x00,0x24,0x54,0x44,0x47,0x5c,0x04,0x00},   // 0x9b 'さ'(独自)
{0x00,0x00,0x3f,0x40,0x40,0x40,0x20,0x00},   // 0x9c 'し'(独自)
{0x02,0x02,0x0a,0x56,0x3f,0x02,0x02,0x00},   // 0x9d 'す'(独自)
{0x04,0x04,0x3f,0x44,0x54,0x5f,0x44,0x00},   // 0x9e 'せ'(独自)
{0x00,0x08,0x09,0x3d,0x4b,0x49,0x08,0x00},   // 0x9f 'そ'(独自)
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},   // 0xa0 '　'
{0x20,0x50,0x20,0x00,0x00,0x00,0x00,0x00},   // 0xa1 '。'
{0x00,0x00,0x00,0x3f,0x01,0x01,0x01,0x00},   // 0xa2 '「'
{0x40,0x40,0x40,0x7e,0x00,0x00,0x00,0x00},   // 0xa3 '」'
{0x20,0x40,0x00,0x00,0x00,0x00,0x00,0x00},   // 0xa4 '、'
{0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00},   // 0xa5 '・'
{0x00,0x01,0x45,0x45,0x25,0x15,0x0f,0x00},   // 0xa6 'ヲ'
{0x00,0x04,0x44,0x3c,0x14,0x0c,0x00,0x00},   // 0xa7 'ァ'
{0x00,0x20,0x20,0x10,0x78,0x04,0x00,0x00},   // 0xa8 'ィ'
{0x00,0x18,0x48,0x4c,0x28,0x18,0x00,0x00},   // 0xa9 'ゥ'
{0x00,0x40,0x48,0x78,0x48,0x40,0x00,0x00},   // 0xaa 'ェ'
{0x00,0x28,0x28,0x58,0x7c,0x08,0x00,0x00},   // 0xab 'ォ'
{0x00,0x10,0x1c,0x68,0x08,0x18,0x00,0x00},   // 0xac 'ャ'
{0x00,0x40,0x48,0x48,0x78,0x40,0x00,0x00},   // 0xad 'ュ'
{0x00,0x00,0x44,0x54,0x54,0x7c,0x00,0x00},   // 0xae 'ョ'
{0x00,0x18,0x40,0x58,0x20,0x18,0x00,0x00},   // 0xaf 'ッ'
{0x04,0x08,0x08,0x08,0x08,0x08,0x08,0x00},   // 0xb0 'ー'
{0x00,0x01,0x41,0x3d,0x09,0x05,0x03,0x00},   // 0xb1 'ア'
{0x00,0x10,0x10,0x08,0x7c,0x02,0x01,0x00},   // 0xb2 'イ'
{0x00,0x06,0x42,0x43,0x22,0x12,0x0e,0x00},   // 0xb3 'ウ'
{0x20,0x22,0x22,0x3e,0x22,0x22,0x20,0x00},   // 0xb4 'エ'
{0x22,0x22,0x12,0x4a,0x7f,0x02,0x02,0x00},   // 0xb5 'オ'
{0x00,0x42,0x22,0x1f,0x02,0x42,0x7e,0x00},   // 0xb6 'カ'
{0x00,0x12,0x12,0x1f,0x72,0x12,0x10,0x00},   // 0xb7 'キ'
{0x00,0x08,0x44,0x43,0x22,0x12,0x0e,0x00},   // 0xb8 'ク'
{0x08,0x07,0x42,0x22,0x1e,0x02,0x02,0x00},   // 0xb9 'ケ'
{0x00,0x42,0x42,0x42,0x42,0x42,0x7e,0x00},   // 0xba 'コ'
{0x02,0x02,0x4f,0x42,0x22,0x1f,0x02,0x00},   // 0xbb 'サ'
{0x00,0x45,0x4a,0x40,0x20,0x10,0x0c,0x00},   // 0xbc 'シ'
{0x40,0x42,0x22,0x22,0x1a,0x26,0x40,0x00},   // 0xbd 'ス'
{0x04,0x04,0x3f,0x44,0x44,0x54,0x4c,0x00},   // 0xbe 'セ'
{0x00,0x01,0x46,0x40,0x20,0x10,0x0f,0x00},   // 0xbf 'ソ'
{0x00,0x08,0x44,0x4b,0x2a,0x12,0x0e,0x00},   // 0xc0 'タ'
{0x08,0x0a,0x4a,0x3e,0x09,0x09,0x08,0x00},   // 0xc1 'チ'
{0x02,0x0c,0x42,0x4c,0x20,0x10,0x0e,0x00},   // 0xc2 'ツ'
{0x04,0x05,0x45,0x3d,0x05,0x05,0x04,0x00},   // 0xc3 'テ'
{0x00,0x00,0x7f,0x08,0x08,0x10,0x00,0x00},   // 0xc4 'ト'
{0x04,0x44,0x24,0x1f,0x04,0x04,0x04,0x00},   // 0xc5 'ナ'
{0x20,0x22,0x22,0x22,0x22,0x22,0x20,0x00},   // 0xc6 'ニ'
{0x40,0x41,0x25,0x15,0x19,0x27,0x00,0x00},   // 0xc7 'ヌ'
{0x20,0x22,0x12,0x7b,0x06,0x12,0x20,0x00},   // 0xc8 'ネ'
{0x40,0x40,0x20,0x10,0x08,0x07,0x00,0x00},   // 0xc9 'ノ'
{0x40,0x30,0x0e,0x00,0x02,0x0c,0x70,0x00},   // 0xca 'ハ'
{0x00,0x3f,0x48,0x48,0x48,0x44,0x44,0x00},   // 0xcb 'ヒ'
{0x00,0x02,0x42,0x42,0x22,0x12,0x0e,0x00},   // 0xcc 'フ'
{0x08,0x04,0x02,0x04,0x08,0x10,0x20,0x00},   // 0xcd 'ヘ'
{0x24,0x14,0x44,0x7f,0x04,0x14,0x24,0x00},   // 0xce 'ホ'
{0x02,0x02,0x12,0x22,0x52,0x0a,0x06,0x00},   // 0xcf 'マ'
{0x00,0x21,0x25,0x29,0x4a,0x42,0x00,0x00},   // 0xd0 'ミ'
{0x40,0x70,0x4c,0x43,0x50,0x20,0x40,0x00},   // 0xd1 'ム'
{0x40,0x44,0x24,0x14,0x08,0x37,0x00,0x00},   // 0xd2 'メ'
{0x00,0x08,0x09,0x3f,0x49,0x49,0x48,0x00},   // 0xd3 'モ'
{0x04,0x04,0x0f,0x74,0x02,0x0a,0x06,0x00},   // 0xd4 'ヤ'
{0x20,0x22,0x22,0x22,0x3e,0x20,0x20,0x00},   // 0xd5 'ユ'
{0x00,0x42,0x4a,0x4a,0x4a,0x4a,0x7e,0x00},   // 0xd6 'ヨ'
{0x00,0x04,0x45,0x45,0x25,0x15,0x0c,0x00},   // 0xd7 'ラ'
{0x00,0x0f,0x40,0x40,0x20,0x1f,0x00,0x00},   // 0xd8 'リ'
{0x40,0x20,0x1e,0x00,0x7f,0x20,0x10,0x00},   // 0xd9 'ル'
{0x00,0x00,0x7f,0x40,0x20,0x10,0x08,0x00},   // 0xda 'レ'
{0x00,0x7e,0x42,0x42,0x42,0x42,0x7e,0x00},   // 0xdb 'ロ'
{0x00,0x06,0x42,0x42,0x22,0x12,0x0e,0x00},   // 0xdc 'ワ'
{0x00,0x41,0x42,0x40,0x20,0x10,0x0c,0x00},   // 0xdd 'ン'
{0x01,0x02,0x01,0x02,0x00,0x00,0x00,0x00},   // 0xde '゛'
{0x02,0x05,0x02,0x00,0x00,0x00,0x00,0x00},   // 0xdf '゜'
{0x42,0x3a,0x07,0x22,0x54,0x44,0x44,0x00},   // 0xe0 'た'(独自)
{0x00,0x02,0x12,0x4e,0x4b,0x4a,0x32,0x00},   // 0xe1 'ち'(独自)
{0x04,0x04,0x02,0x22,0x22,0x22,0x1c,0x00},   // 0xe2 'つ'(独自)
{0x00,0x02,0x02,0x1a,0x25,0x43,0x41,0x00},   // 0xe3 'て'(独自)
{0x00,0x20,0x57,0x48,0x48,0x44,0x44,0x00},   // 0xe4 'と'(独自)
{0x12,0x0a,0x27,0x52,0x50,0x3a,0x24,0x00},   // 0xe5 'な'(独自)
{0x7f,0x00,0x20,0x52,0x42,0x42,0x40,0x00},   // 0xe6 'に'(独自)
{0x30,0x4e,0x38,0x54,0x0f,0x64,0x78,0x00},   // 0xe7 'ぬ'(独自)
{0x24,0x14,0x7f,0x04,0x22,0x52,0x3c,0x00},   // 0xe8 'ね'(独自)
{0x18,0x24,0x12,0x4e,0x42,0x24,0x18,0x00},   // 0xe9 'の'(独自)
{0x7f,0x00,0x24,0x54,0x54,0x3f,0x44,0x00},   // 0xea 'は'(独自)
{0x02,0x3a,0x47,0x40,0x41,0x3e,0x04,0x00},   // 0xeb 'ひ'(独自)
{0x40,0x30,0x40,0x4d,0x32,0x10,0x60,0x00},   // 0xec 'ふ'(独自)
{0x08,0x04,0x02,0x04,0x08,0x10,0x10,0x00},   // 0xed 'へ'(独自)
{0x7f,0x00,0x6a,0x6a,0x7e,0x2a,0x4a,0x00},   // 0xee 'ほ'(独自)
{0x00,0x6a,0x6a,0x6a,0x7f,0x2a,0x4a,0x00},   // 0xef 'ま'(独自)
{0x30,0x29,0x1d,0x4b,0x48,0x3c,0x10,0x00},   // 0xf0 'み'(独自)
{0x12,0x2a,0x7f,0x42,0x40,0x42,0x24,0x00},   // 0xf1 'む'(独自)
{0x30,0x4e,0x38,0x54,0x0f,0x44,0x38,0x00},   // 0xf2 'め'(独自)
{0x00,0x0a,0x3e,0x4b,0x4a,0x4a,0x30,0x00},   // 0xf3 'も'(独自)
{0x04,0x07,0x1c,0x62,0x03,0x0a,0x04,0x00},   // 0xf4 'や'(独自)
{0x1e,0x04,0x52,0x3f,0x12,0x12,0x0c,0x00},   // 0xf5 'ゆ'(独自)
{0x00,0x20,0x50,0x50,0x3f,0x24,0x44,0x00},   // 0xf6 'よ'(独自)
{0x00,0x1c,0x51,0x49,0x4a,0x48,0x30,0x00},   // 0xf7 'ら'(独自)
{0x00,0x0f,0x42,0x41,0x21,0x1e,0x00,0x00},   // 0xf8 'り'(独自)
{0x00,0x10,0x69,0x6d,0x4b,0x49,0x30,0x00},   // 0xf9 'る'(独自)
{0x24,0x14,0x7f,0x04,0x02,0x3e,0x40,0x00},   // 0xfa 'れ'(独自)
{0x00,0x10,0x49,0x4d,0x4b,0x49,0x30,0x00},   // 0xfb 'ろ'(独自)
{0x24,0x14,0x7f,0x04,0x42,0x42,0x3c,0x00},   // 0xfc 'わ'(独自)
{0x40,0x30,0x0c,0x33,0x40,0x40,0x20,0x00}    // 0xfd 'ん'(独自)
};
