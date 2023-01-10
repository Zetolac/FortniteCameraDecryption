struct FMinimalViewInfo // Struct
{
    Vector3 Location; // FVector 0x18
    Vector3 Rotation; // FRotator 0x18
    float FOV; // float 0x4
    float DesiredFOV; // float 0x4
    float OrthoWidth; // float 0x4
    float OrthoNearClipPlane; // float 0x4
    float OrthoFarClipPlane; // float 0x4
    float PerspectiveNearClipPlane; // float 0x4
    float AspectRatio; // float 0x4
    char c[0x6FC]; // char 0x6FC
};

char __fastcall sub_147DE43E8(__int64 a1, _BYTE* a2)
{
    __int64 v2; // r9
    __int64 v3; // r8
    int v4; // ecx
    __int64 v5; // r9
    char v6; // al
    char result; // al
    _BYTE* v8; // rcx
    __int64 v9; // rdx

    v2 = a1 + 10;
    v3 = 52i64;
    _BYTE byte_14E7187D8 = read<_BYTE>(base + 0xE7187D8);
    if (byte_14E7187D8)
    {
        v4 = -544718675;
        v5 = v2 - (_QWORD)a2;
        do
        {
            v6 = v4;
            v4 += 11;
            result = a2[v5] ^ v6;
            *a2++ = result;
            --v3;
        } while (v3);
    }
    else
    {
        v8 = (_BYTE*)(a1 + 1);
        v9 = a2 - v8;
        do
        {
            result = *v8 + ~v8[9];
            (v8++)[v9] = result;
            --v3;
        } while (v3);
    }
    return result;
}

FMinimalViewInfo GetMViewInfo()
{
    int v3; // eax
    _BYTE* v4; // rdi
    int v5; // esi
    __int64 v6; // rbx
    char v7; // al
    int v8; // ecx
    __int64 v9; // rdx
    char v10; // al
    char v11; // al
    __int64 v12; // r11
    char v13; // r10
    int v14; // eax
    char v15; // cl
    __int64 v16; // r8
    __int64 v17; // rbx
    int v18; // ecx
    __int64 v19; // rdx
    _BYTE* v20; // rbx
    char v21; // al
    unsigned int v22; // ecx
    __int64 v23; // rbx
    __int64 v24; // r8
    char v25; // al
    char v26; // al
    int v27; // edx
    __int64 v28; // r8
    __int64 v29; // rcx
    char v30; // al

    char a3 = 3;
    _BYTE* a4;
    _BYTE* a2 = new _BYTE[0xE4];
    uintptr_t qword_14E986978 = read<uintptr_t>(base + 0xE986978);
    for (int i = 0; i < 0xE4; i++)
        ((char*)a2)[i] = read<char>(qword_14E986978 + i);
    _BYTE byte_14E718820 = read<_BYTE>(base + 0xE718820);

    a4 = a2;
    v3 = a3;
    v4 = a2;
    
    {
        v5 = 0;
        v6 = (__int64)a2;
        if (byte_14E718820)
        {
            switch (byte_14E718820)
            {
            case 1:
                v22 = -1469002388;
                v23 = v6 + 10 - (_QWORD)a2;
                v24 = 52i64;
                do
                {
                    v25 = v22;
                    v22 -= 9;
                    v3 = v4[v23] ^ v25;
                    *v4++ = v3;
                    --v24;
                } while (v24);
                break;
            case 2:
                v18 = 97235411;
                v19 = 0i64;
                v20 = (_BYTE*)(v6 + 61);
                do
                {
                    v21 = *v20-- + v18;
                    v4[v19] = v21;
                    v3 = 4 * v5++;
                    v18 ^= v3 ^ 1;
                    ++v19;
                } while (v19 < 52);
                break;
            case 3:
                v16 = 52i64;
                v17 = v6 + 10 - (_QWORD)a2;
                do
                {
                    v3 = __ROL1__(v4[v17], 4);
                    *v4++ = v3;
                    --v16;
                } while (v16);
                break;
            case 4:
                v11 = *(_BYTE*)v6;

                v12 = *(_QWORD*)(v6 + 8);
                v13 = -9;
                do
                {
                    v14 = 52;
                    v15 = v13;
                    if (v5 % 3u != 1)
                        v14 = 104;
                    v13 += 17;
                    v3 = v5 + v14;
                    ++v5;
                    *v4++ = *(_BYTE*)(v3 + v12) ^ v15;
                } while (v5 < 52);
                break;
            case 5:
                v7 = *(_BYTE*)v6;
                v8 = 2946527;
                v9 = *(_QWORD*)(v6 + 8) + 52i64 - (_QWORD)v4;
                do
                {
                    v10 = v8;
                    v8 ^= v5 ^ 0xFEDCBA98;
                    v3 = (v4[v9] ^ v10) - v5++;
                    *v4++ = v3;
                } while (v5 < 52);
                break;
            default:
               v3 = sub_147DE43E8((uint64_t)a4, a2);
                break;
            }
        }
        else
        {
            v26 = *(_BYTE*)v6;
            v27 = -1081392900;
            v28 = 52i64;
            v29 = *(_QWORD*)(v6 + 8) + 104i64 - (_QWORD)v4;
            do
            {
                v30 = v4[v29] - v27;
                v27 += 5;
                v3 = ~v30;
                *v4++ = v3;
                --v28;
            } while (v28);
        }
    }
    FMinimalViewInfo ViewInfo = *(FMinimalViewInfo*)v4;
    return ViewInfo;
    //return v3;
}
