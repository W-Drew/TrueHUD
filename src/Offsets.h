#pragma once

// variables
inline float GetHUDOpacity()
{
    return *(float*)RELOCATION_ID(510579, 383659).address();
}

inline float GetShoutMeterEndDuration()
{
    return *(float*)RELOCATION_ID(510025, 382842).address();
}

inline float (*GetWorldToCameraMatrix())[4]
{
    return (float(*)[4])RELOCATION_ID(519579, 406126).address();
}

inline RE::NiRect<float>& GetViewport()
{
    return *(RE::NiRect<float>*)RELOCATION_ID(519618, 406160).address();
}

inline float GetNearClipDistance()
{
    return *(float*)(RELOCATION_ID(517032, 403540).address() + 0x40);
}

inline float GetFarClipDistance()
{
    return *(float*)(RELOCATION_ID(517032, 403540).address() + 0x44);
}

// functions
inline uint32_t IsSentient(RE::Actor* actor)
{
    using func_t = decltype(&IsSentient);
    REL::Relocation<func_t> func { RELOCATION_ID(36889, 37913) };
    return func(actor);
}

inline uint32_t GetSoulType(uint16_t a_actorLevel, uint8_t a_isActorSentient)
{
    using func_t = decltype(&GetSoulType);
    REL::Relocation<func_t> func { RELOCATION_ID(25933, 26520) };
    return func(a_actorLevel, a_isActorSentient);
}