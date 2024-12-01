/*                                      60 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────────┬────┬────────────────────────────╮ ╭───────────────────────────────┬─────┬──────────────────────────────╮
  │  0   1   2   3   4   5     │  6 │      7   8   9  10  11  12 │ │ LN5 LN4   LN3 LN2 LN1 LN0     │ REU │      RN0 RN1 RN2 RN3 RN4 RN5 │
  │ 13  14  15  16  17  18     │ 19 │     20  21  22  23  24  25 │ │ LT5 LT4   LT3 LT2 LT1 LT0     │ RED │      RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 26  27  28  29  30  31     │ 32 │     33  34  35  36  37  38 │ │ LM5 LM4   LM3 LM2 LM1 LM0     │ REL │      RM0 RM1 RM2 RM3 RM4 RM5 │
  │ 39  40  41  42  43  44     │ 45 │     45  46  47  48  49  50 │ │ LB5 LB4   LB3 LB2 LB1 LB0     │ RER │      RB0 RB1 RB2 RB3 RB4 RB5 │
  ╰───╮ 51│ 52  53  54  55  56 │ 57 │ 58  59  30  61  62 ╭───────╯ ╰───╮ LEC │ LH4 LH3 LH2 LH1 LH0 │ REC │  RH0 RH1 RH2 RH3 RH4 ╭───────╯
      ╰───┴────────────────────┴────┴────────────────────╯             ╰─────┴─────────────────────┴─────┴──────────────────────╯         */

#pragma once

// encoder in left

#define LEC 51

// encoder in right

#define REC  6
#define REU 19
#define RED 32
#define REL 45
#define RER 57

// left-number row

#define LN5  0
#define LN4  1
#define LN3  2
#define LN2  3
#define LN1  4
#define LN0  5

// right-number row

#define RN0  7
#define RN1  8
#define RN2  9
#define RN3 10
#define RN4 11
#define RN5 12

// left-top row

#define LT5 13
#define LT4 14
#define LT3 15
#define LT2 16
#define LT1 17
#define LT0 18

// right-top row

#define RT0 20
#define RT1 21
#define RT2 22
#define RT3 23
#define RT4 24
#define RT5 25

// left-middle row

#define LM5 39
#define LM4 40
#define LM3 41
#define LM2 42
#define LM1 43
#define LM0 44

// right-middle row

#define RB0 45
#define RB1 46
#define RB2 47
#define RB3 48
#define RB4 49
#define RB5 50

// thumb keys (left)

#define LH4 52
#define LH3 53
#define LH2 54
#define LH1 55
#define LH0 56

// thumb keys (right)

#define RH0 58
#define RH1 59
#define RH2 60
#define RH3 61
#define RH4 62
