```c++
_BYTE *__fastcall sub_14615E05C(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rbx
  int v3; // esi
  _BYTE *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  char v8; // al
  int v9; // r9d
  _BYTE *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  char v13; // al
  __int64 v14; // r8
  _BYTE *v15; // rcx
  char v16; // al
  int v17; // edx
  __int64 v18; // rcx
  _BYTE *v19; // r9
  char v20; // al
  char v21; // al
  int v22; // r9d
  __int64 i; // rdx
  int v24; // eax
  char v25; // al
  __int64 v26; // rbx
  char v27; // r10
  _BYTE *v28; // r11
  int v29; // eax
  char v30; // cl
  int v31; // eax

  v2 = a1 + 12905;
  v3 = 0;
  *(float *)&dword_14C653A18 = *(float *)&dword_14C653A18
                             + (float)((float)((float)*(double *)(a1 + 752) - *(double *)(a1 + 744)) * 0.5);
  if ( byte_14C2350B0 )
  {
    switch ( byte_14C2350B0 )
    {
      case 1:
        v22 = 81473749;
        for ( i = 0i64; i < 24; ++i )
        {
          a2[i] = *(_BYTE *)(v2 - i + 32) + v22;
          v24 = 4 * v3++;
          v22 ^= v24 ^ 1;
        }
        break;
      case 2:
        v16 = *(_BYTE *)v2;
        if ( (*(_BYTE *)v2 & 8) == 0 || (*(_BYTE *)(a1 + 12906) & 0x40) == 0 )
        {
          *(_BYTE *)(a1 + 12906) |= 0x40u;
          *(_BYTE *)v2 = v16 | 8;
          *(_QWORD *)(a1 + 12909) = sub_140DEBEF8(72i64);
        }
        v17 = 2468901;
        v18 = *(_QWORD *)(v2 + 4) + 24i64 - (_QWORD)a2;
        v19 = a2;
        do
        {
          v20 = v17;
          v17 ^= v3 ^ 0xFEDCBA98;
          v21 = (v19[v18] ^ v20) - v3++;
          *v19++ = v21;
        }
        while ( v3 < 24 );
        break;
      case 3:
        v14 = 24i64;
        v15 = &a2[-v2];
        do
        {
          v15[v2] = *(_BYTE *)v2 + ~*(_BYTE *)(v2 + 9);
          ++v2;
          --v14;
        }
        while ( v14 );
        break;
      case 4:
        v8 = *(_BYTE *)v2;
        if ( (*(_BYTE *)v2 & 8) == 0 || (*(_BYTE *)(a1 + 12906) & 0x40) == 0 )
        {
          *(_BYTE *)(a1 + 12906) |= 0x40u;
          *(_BYTE *)v2 = v8 | 8;
          *(_QWORD *)(a1 + 12909) = sub_140DEBEF8(72i64);
        }
        v9 = -1077833939;
        v10 = a2;
        v11 = *(_QWORD *)(v2 + 4) + 48i64 - (_QWORD)a2;
        v12 = 24i64;
        do
        {
          v13 = v10[v11] - v9;
          v9 += 5;
          *v10++ = ~v13;
          --v12;
        }
        while ( v12 );
        break;
      case 5:
        v5 = a2;
        v6 = v2 + 9 - (_QWORD)a2;
        v7 = 24i64;
        do
        {
          *v5 = __ROL1__(v5[v6], 4);
          ++v5;
          --v7;
        }
        while ( v7 );
        break;
      default:
        sub_14615427C(v2);
        break;
    }
  }
  else
  {
    v25 = *(_BYTE *)v2;
    if ( (*(_BYTE *)v2 & 8) == 0 || (*(_BYTE *)(a1 + 12906) & 0x40) == 0 )
    {
      *(_BYTE *)(a1 + 12906) |= 0x40u;
      *(_BYTE *)v2 = v25 | 8;
      *(_QWORD *)(a1 + 12909) = sub_140DEBEF8(72i64);
    }
    v26 = *(_QWORD *)(v2 + 4);
    v27 = -119;
    v28 = a2;
    do
    {
      v29 = 24;
      v30 = v27;
      if ( v3 % 3u != 1 )
        v29 = 48;
      v27 += 17;
      v31 = v3 + v29;
      ++v3;
      *v28++ = *(_BYTE *)(v31 + v26) ^ v30;
    }
    while ( v3 < 24 );
  }
  return a2;
}
```
