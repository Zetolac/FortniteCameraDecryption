struct CamewaDescwipsion
{
    Vector3 Location;
    Vector3 Rotation;
    float FieldOfView;
    char Useless[0x18];
};
CamewaDescwipsion GetViewPoint()
{
    char v1; // r8
    CamewaDescwipsion ViewPoint = Read<CamewaDescwipsion>(base_address + 0xed57310);
    BYTE* v2 = (BYTE*)&ViewPoint;
    int i; // edx
    __int64 result; // rax
 
    v1 = 0x40;
    for (i = 0; i < 0x40; ++i)
    {
        *v2 ^= v1;
        result = (unsigned int)(i + 0x17);
        v1 += i + 0x17;
        v2++;
    }
