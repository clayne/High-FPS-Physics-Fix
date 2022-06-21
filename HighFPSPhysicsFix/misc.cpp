#include "pch.h"

namespace SDT
{
    namespace Payloads {
        static inline constexpr std::uint8_t SkipNoINI[] = { 0x48, 0x8B, 0xCF };
        static inline constexpr std::uint8_t FixCPU[] = { 0xE9, 0x84, 0x00, 0x00, 0x00, 0x90 };
    }
    RelocAddr<uintptr_t> SkipNoINI(0xD41EC4); //48 8B 07             48 8B CF             FF 50 48             48 8B 07             48 8B CF             FF 50 30
    RelocAddr<uintptr_t> SetThreadsNGAddress(0x12A242A); //48 8D 54 24 38       41 B0 01             48 8B C8             C6 44 24 38 00
    RelocAddr<uintptr_t> ReturnThreadsNGAddress(0xD1D4A8); //E9 C318F7FF          CC                   CC                   CC                   CC                   CC                   CC                   CC                   CC                   CC                   CC                   CC                   CC                   CC                   CC                   CC                   CC                   CC                   CC                   CC                   8B 15 C2D3A602
    RelocAddr<uintptr_t> ReturnThreadsNGJMPAddress(0xC8ED70); //48 89 5C 24 08       57                   48 83 EC 20          0FB6 D9              8B CA                E8 3CF1E500

    RelocAddr<uintptr_t> FixCPUThreadsJMP1Address(0xE9B7E1); //74 14                F6 42 40 01          75 0E                E8 92E5ECFF
    RelocAddr<uintptr_t> FixCPUThreadsJMP2Address(0xD69DCF); //0F84 83000000        48 89 74 24 38       BE 03000000          48 89 7C 24 20
    //fix stuttering
    RelocAddr<uintptr_t> FixStuttering1Address(0x1D6EB96); //F3 48 0F2C CB        3B C8                0F42 C1              89 05 8E407D04
    RelocAddr<uintptr_t> C24Address(0x1D6EDA1); //F3 0F11 0D 7B3E7D04  E8 823C0000          48 8B 0D FBC8C603
    RelocAddr<uintptr_t> FixStuttering2Address(0x1D6EB45); //F3 0F5D 54 24 20
    RelocAddr<uintptr_t> C1CAddress(0x1D6EB71); //F3 0F5E DA           F3 0F11 15 9F407D04  F3 0F11 25 A3407D04
    RelocAddr<uintptr_t> FixStuttering3Address(0x14D58A0); //F3 41 0F10 08        E9 D6FDFFFF CC CC CC CC CC CC 44 89 44 24 18

    RelocAddr<uintptr_t> FixWhiteScreenAddress(0x172A893); //74 23                83 E9 02             74 11                FF C9                75 31                0F28 D0
    RelocAddr<uintptr_t> FixWindSpeed1Address(0x1DCF701); //0F29 74 24 30        0F28 F3              4C 8B F2             FF 15 BE7EE400
    RelocAddr<uintptr_t> FixWindSpeed2Address(0x1D6F84E); //F3 44 0F10 0D C5337D04 0F57 C0              44 0F2F C8           0F86 E6030000
    RelocAddr<uintptr_t> FixWindSpeed3Address(0x1D6F8F7); //F3 44 0F10 0D 1C337D04 F3 44 0F10 05 27337D04 0F28 C7
    RelocAddr<uintptr_t> FixWindSpeed4Address(0x1D6FADB); //F3 0F10 05 39317D04  F3 0F10 15 45317D04  89 44 24 28
    RelocAddr<uintptr_t> FixRotationSpeedAddress(0xF49621); //75 0A                F3 0F10 15 35F7CF01  EB 08
    RelocAddr<uintptr_t> FixLockpickRotationAddress(0x129CA32); //F3 0F59 0D 9AEC8B04  E8 81180000          C7 43 24 02000000 
    RelocAddr<uintptr_t> FixWSRotationSpeedAddress(0x2182B2); //F3 0F59 0D D2374C03  84 C9                75 07
    //Loading screen
    RelocAddr<uintptr_t> FixTriggerZoomSpeedAddress(0x129786F); //F3 0F10 0D 590A5702  0F57 0D 12199B01     EB 5B
    RelocAddr<uintptr_t> FixRightTriggerSpeedAddress(0x12978D3); //F3 0F10 0D F5095702  48 8D 4F F0          E8 0C180000
    RelocAddr<uintptr_t> FixRepeateRateAddress(0x1297474); //8B 8B 6C020000       44 0F28 94 24 B0000000 8D 41 01
    RelocAddr<uintptr_t> FixLoadScreenRotAddress(0x1298D0F); //0F86 8E010000        F3 0F58 CB           0F29 74 24 40        48 8D 54 24 60
    RelocAddr<uintptr_t> FixLoadScreenRotateSpeed1Address(0x129758C); //F3 0F10 05 DC0C5702  48 8D 55 30          48 8B CB             F3 0F11 45 34
    RelocAddr<uintptr_t> FixLoadScreenRotateSpeed2Address(0x12975E6); //F3 0F10 05 820C5702  48 8D 55 30          48 8B CB             C7 45 30 00000000
    RelocAddr<uintptr_t> FixLoadScreenRotateSpeed3Address(0x129763F); //F3 0F10 05 290C5702  48 8D 55 30          48 8B CB             C7 45 34 00000000
    RelocAddr<uintptr_t> FixLoadScreenRotateSpeed4Address(0x12976A4); //F3 0F10 05 C40B5702  48 8D 55 30          48 8B CB             F3 0F11 45 30

    RelocAddr<uintptr_t> FixStuckAnimAddress(0x252E789); //F3 41 0F10 1E        4C 8D 44 24 30       48 8D 54 24 20       48 8D 4B 28
    RelocAddr<uintptr_t> FixMotionFeedBackAddress(0x2844F0); //0F2F 05 C16C9C02     73 04                41 0F28 C1           49 8B 47 08          F3 0F11 40 20
    RelocAddr<uintptr_t> SittingRotationSpeedXAddress(0x3804738);
    RelocAddr<uintptr_t> SittingRotationSpeedYAddress(0x3804750);
    RelocAddr<uintptr_t> FixSittingRotationXAddress(0x12446D0); //F3 0F10 05 68005C02  F3 0F59 40 4C        F3 0F58 43 60        F3 0F11 43 60
    RelocAddr<uintptr_t> FixSittingRotationYAddress(0x12446E7); //F3 0F10 0D 69005C02  F3 0F10 43 64        48 8B 05 255B7904    F3 0F59 48 50
    RelocAddr<uintptr_t> FixOBCPSpeed1Address(0xBC93D0); //CC CC CC CC CC

    static constexpr const char* SECTION_MISC = "Miscellaneous";
    static constexpr const char* SECTION_LIMITER = "Limiter";
    static constexpr const char* CONF_SKIPMISSINGINI = "SkipMissingPluginINI";
    static constexpr const char* CONF_NUMTHREADSWHILELOADNG = "NumOfThreadsWhileLoadingNewGame";
    static constexpr const char* SECTION_FIXES = "Fixes";
    static constexpr const char* CONF_FIXTHREADS = "FixCPUThreads";
    static constexpr const char* CONF_FIXSTUTTER = "FixStuttering";
    static constexpr const char* CONF_FIXWHITE = "FixWhiteScreen";
    static constexpr const char* CONF_FIXWIND = "FixWindSpeed";
    static constexpr const char* CONF_FIXROTATION = "FixRotationSpeed";
    static constexpr const char* CONF_FIXSITROTATION = "FixSittingRotationSpeed";
    static constexpr const char* CONF_FIXWSROTATION = "FixWorkshopRotationSpeed";
    static constexpr const char* CONF_FIXLOADINGMODEL = "FixLoadingModel";
    static constexpr const char* CONF_FIXSTUCK = "FixStuckAnimation";
    static constexpr const char* CONF_FIXRESPONSIVE = "FixMotionResponsive";

    using namespace Patching;

    DMisc DMisc::m_Instance;

    DMisc::DMisc()
    {
    }

    void DMisc::LoadConfig()
    {
        m_conf.skipmissingini = GetConfigValueBool(SECTION_MISC, CONF_SKIPMISSINGINI, true);
        m_conf.numthreads = GetConfigValueInteger(SECTION_LIMITER, CONF_NUMTHREADSWHILELOADNG, 1);
        m_conf.fixstuttering = GetConfigValueBool(SECTION_FIXES, CONF_FIXSTUTTER, true);
        m_conf.fixwhitescreen = GetConfigValueBool(SECTION_FIXES, CONF_FIXWHITE, true);
        m_conf.fixwindspeed = GetConfigValueBool(SECTION_FIXES, CONF_FIXWIND, true);
        m_conf.fixrotspeed = GetConfigValueBool(SECTION_FIXES, CONF_FIXROTATION, true);
        m_conf.fixsitrotspeed = GetConfigValueBool(SECTION_FIXES, CONF_FIXSITROTATION, true);
        m_conf.fixwsrotspeed = GetConfigValueBool(SECTION_FIXES, CONF_FIXWSROTATION, true);
        m_conf.fixloadmodel = GetConfigValueBool(SECTION_FIXES, CONF_FIXLOADINGMODEL, true);
        m_conf.fixstuckanim = GetConfigValueBool(SECTION_FIXES, CONF_FIXSTUCK, true);
        m_conf.fixresponsive = GetConfigValueBool(SECTION_FIXES, CONF_FIXRESPONSIVE, true);
    }

    void Structures::_SettingCollectionList::LoadIni_Hook()
    {
        DWORD dwAttrib = ::GetFileAttributesA(inipath);
        if (dwAttrib == INVALID_FILE_ATTRIBUTES ||
            (dwAttrib & FILE_ATTRIBUTE_DIRECTORY)) {
            return;
        }

        this->LoadINI();
    }

    void DMisc::PostLoadConfig()
    {
        if (m_conf.skipmissingini) {
            _MESSAGE("[SkipINI] Disabling processing of missing plugin INIs");
        }
    }


    void DMisc::Patch()
    {
        if (m_conf.skipmissingini)
        {
            safe_write(
                SkipNoINI,
                static_cast<const void*>(Payloads::SkipNoINI),
                sizeof(Payloads::SkipNoINI));
        }
        if (m_conf.numthreads > 0) {
            Patch_SetThreadsNG();
        }
            //safe_memset(FixCPUThreadsJMP1Address, 0xEB, 0x1); //je -> jmp
            //safe_write(FixCPUThreadsJMP2Address,
            //    static_cast<const void*>(Payloads::FixCPU),
            //    sizeof(Payloads::FixCPU)); //je -> jmp
        if (m_conf.fixstuttering) {
            //cvttss2si rcx,xmm3 fix
            //= 1
            {
                struct FixStuttering1 : JITASM::JITASM {
                    FixStuttering1(std::uintptr_t retnAddr)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label retnLabel;
                        Xbyak::Label magicLabel;

                        movss(xmm3, dword[rip + magicLabel]);
                        cvttss2si(rcx, xmm3);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x5);

                        L(magicLabel);
                        dd(0x3f800000); // 1
                    }
                };
                _MESSAGE("[Fix stuttering] patching...");
                {
                    FixStuttering1 code(FixStuttering1Address);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixStuttering1Address, code.get());
                }
            }
            //C24 = 0
            safe_memset(C24Address, 0x90, 0x8);
            {
                //C20 = FPS
                struct FixStuttering2 : JITASM::JITASM {
                    FixStuttering2(std::uintptr_t retnAddr)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label retnLabel;

                        minss(xmm2, ptr[rsp + 0x20]);
                        movss(xmm2, xmm6);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x6);
                    }
                };
                {
                    FixStuttering2 code(FixStuttering2Address);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixStuttering2Address, code.get());
                }
                safe_memset(FixStuttering2Address + 0x5, 0x90, 0x1);
            }
            safe_memset(FixStuttering2Address + 0xE, 0x90, 0x4);
            //C1C = FPS
            safe_memset(C1CAddress, 0x90, 0x4);
            {
                //fix moving objects
                struct FixStuttering3 : JITASM::JITASM {
                    FixStuttering3(std::uintptr_t retnAddr)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label retnLabel;
                        Xbyak::Label magicLabel;

                        movss(xmm1, dword[rip + magicLabel]);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x5);

                        L(magicLabel);
                        dd(0x3c8b4396); // 0.017
                    }
                };
                {
                    FixStuttering3 code(FixStuttering3Address);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixStuttering3Address, code.get());
                }
                _MESSAGE("[Fix stuttering] OK");
            }
        }
        if (m_conf.fixwhitescreen) {
            safe_memset(FixWhiteScreenAddress, 0x90, 0x3C);
        }
        if (m_conf.fixwindspeed) {
            {
                struct FixWindSpeed1 : JITASM::JITASM {
                    FixWindSpeed1(std::uintptr_t retnAddr)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label retnLabel;
                        Xbyak::Label magicLabel;

                        movaps(ptr[rsp + 0x30], xmm6);
                        movss(xmm6, dword[rip + magicLabel]);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x8);

                        L(magicLabel);
                        dd(0x3c88888a); // 0.016667
                    }
                };
                _MESSAGE("[Fix wind speed] patching...");
                {
                    FixWindSpeed1 code(FixWindSpeed1Address);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixWindSpeed1Address, code.get());
                }
                safe_memset(FixWindSpeed1Address + 0x5, 0x90, 0x3);
            }
            {
                struct FixWindSpeed2 : JITASM::JITASM {
                    FixWindSpeed2(std::uintptr_t retnAddr)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label retnLabel;
                        Xbyak::Label timerLabel;

                        mov(rcx, ptr[rip + timerLabel]);
                        movss(xmm9, dword[rcx]);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x9);

                        L(timerLabel);
                        dq(std::uintptr_t(Game::g_frameTimer));
                    }
                };
                _MESSAGE("[Fix wind speed] patching...");
                {
                    FixWindSpeed2 code(FixWindSpeed2Address);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixWindSpeed2Address, code.get());
                }
                safe_memset(FixWindSpeed2Address + 0x5, 0x90, 0x4);
            }
            {
                struct FixWindSpeed3 : JITASM::JITASM {
                    FixWindSpeed3(std::uintptr_t retnAddr)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label retnLabel;
                        Xbyak::Label timerLabel;

                        mov(rcx, ptr[rip + timerLabel]);
                        movss(xmm9, dword[rcx]);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x9);

                        L(timerLabel);
                        dq(std::uintptr_t(Game::g_frameTimer));
                    }
                };
                {
                    FixWindSpeed3 code(FixWindSpeed3Address);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixWindSpeed3Address, code.get());
                }
                safe_memset(FixWindSpeed3Address + 0x5, 0x90, 0x4);
            }
            {
                struct FixWindSpeed4 : JITASM::JITASM {
                    FixWindSpeed4(std::uintptr_t retnAddr)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label retnLabel;
                        Xbyak::Label timerLabel;

                        mov(r8, ptr[rip + timerLabel]);
                        movss(xmm0, dword[r8]);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x8);

                        L(timerLabel);
                        dq(std::uintptr_t(Game::g_frameTimer));
                    }
                };
                {
                    FixWindSpeed4 code(FixWindSpeed4Address);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixWindSpeed4Address, code.get());
                }
                _MESSAGE("[Fix wind speed] OK");
                safe_memset(FixWindSpeed4Address + 0x5, 0x90, 0x3);
            }
        }
        if (m_conf.fixrotspeed) {
            {
                struct FixRotationSpeed1 : JITASM::JITASM {
                    FixRotationSpeed1(std::uintptr_t retnAddr)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label retnLabel;
                        Xbyak::Label timerLabel;

                        Xbyak::Label jneLabel;
                        Xbyak::Label jmpLabel;

                        Xbyak::Label forwardLabel;
                        Xbyak::Label reverseLabel;

                        jne(jneLabel);
                        movss(xmm2, dword[rip + forwardLabel]);
                        mov(rcx, ptr[rip + timerLabel]);
                        mulss(xmm2, dword[rcx]);
                        jmp(jmpLabel);
                        L(jneLabel);
                        movss(xmm2, dword[rip + reverseLabel]);
                        mov(rcx, ptr[rip + timerLabel]);
                        mulss(xmm2, dword[rcx]);
                        L(jmpLabel);
                        mulss(xmm2, ptr[rbx + 0x38]);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x19);

                        L(timerLabel);
                        dq(std::uintptr_t(Game::g_frameTimer));

                        L(forwardLabel);
                        dd(0x42700000); // 60

                        L(reverseLabel);
                        dd(0xc2700000); // -60
                    }
                };
                _MESSAGE("[Fix rotation speed] patching...");
                {
                    FixRotationSpeed1 code(FixRotationSpeedAddress);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixRotationSpeedAddress, code.get());
                }
                _MESSAGE("[Fix rotation speed] OK");
                safe_memset(FixRotationSpeedAddress + 0x5, 0x90, 0x14);
            }
            {
                //fix lockpick rotation speed
                struct FixLockpickSpeed : JITASM::JITASM {
                    FixLockpickSpeed(std::uintptr_t retnAddr)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label retnLabel;
                        Xbyak::Label magicLabel;

                        mulss(xmm1, dword[rip + magicLabel]);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x8);

                        L(magicLabel);
                        dd(0x3c88888a); // 0.016667
                    }
                };
                _MESSAGE("[Fix locpick rotation speed] patching...");
                {
                    FixLockpickSpeed code(FixLockpickRotationAddress);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixLockpickRotationAddress, code.get());
                }
                _MESSAGE("[Fix locpick rotation speed] OK");
                safe_memset(FixLockpickRotationAddress + 0x5, 0x90, 0x3);
            }
        }
        if (m_conf.fixsitrotspeed) {
            //fix sitting rotation
            SittingRotSpeedX = GetINIFloat("Camera", "fFirstPersonSittingRotationSpeedX", 0.1f) / 0.017;
            SittingRotSpeedY = GetINIFloat("Camera", "fFirstPersonSittingRotationSpeedY", 0.05f) / 0.017;
            safe_write(SittingRotationSpeedXAddress, &SittingRotSpeedX, sizeof(float));
            safe_write(SittingRotationSpeedYAddress, &SittingRotSpeedY, sizeof(float));
            //x
            {
                struct FixSitRotationX : JITASM::JITASM {
                    FixSitRotationX(
                        std::uintptr_t retnAddr,
                        float* a_rotationx)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label valueLabel;
                        Xbyak::Label retnLabel;
                        Xbyak::Label timerLabel;

                        mov(r9, ptr[rip + timerLabel]);
                        mulss(xmm0, dword[r9]);
                        mulss(xmm0, ptr[rax + 0x4C]);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x5);

                        L(timerLabel);
                        dq(std::uintptr_t(Game::g_frameTimer));

                        L(valueLabel);
                        db(reinterpret_cast<const Xbyak::uint8*>(a_rotationx), sizeof(float));
                    }
                };
                _MESSAGE("[Fix sitting rotation] patching...");
                {
                    FixSitRotationX code(FixSittingRotationXAddress, &SittingRotSpeedX);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixSittingRotationXAddress, code.get());
                }
            }
            //y
            {
                struct FixSitRotationY : JITASM::JITASM {
                    FixSitRotationY(
                        std::uintptr_t retnAddr,
                        float* a_rotationy)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label valueLabel;
                        Xbyak::Label retnLabel;
                        Xbyak::Label timerLabel;

                        mov(r9, ptr[rip + timerLabel]);
                        mulss(xmm1, dword[r9]);
                        movss(xmm0, ptr[rbx + 0x64]);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x5);

                        L(timerLabel);
                        dq(std::uintptr_t(Game::g_frameTimer));

                        L(valueLabel);
                        db(reinterpret_cast<const Xbyak::uint8*>(a_rotationy), sizeof(float));
                    }
                };
                {
                    FixSitRotationY code(FixSittingRotationYAddress, &SittingRotSpeedY);;
                    IF4SE::GetBranchTrampoline().Write5Branch(FixSittingRotationYAddress, code.get());
                }
                _MESSAGE("[Fix sitting rotation] OK");
            }
        }
        if (m_conf.fixwsrotspeed) {
            struct FixWorkshopRotSpeed : JITASM::JITASM {
                FixWorkshopRotSpeed(std::uintptr_t retnAddr)
                    : JITASM(IF4SE::GetLocalTrampoline())
                {
                    Xbyak::Label retnLabel;
                    Xbyak::Label timerLabel;

                    mov(rax, ptr[rip + timerLabel]);
                    mulss(xmm1, dword[rax]);

                    jmp(ptr[rip + retnLabel]);

                    L(retnLabel);
                    dq(retnAddr + 0x8);

                    L(timerLabel);
                    dq(std::uintptr_t(Game::g_frameTimer));
                }
            };
            _MESSAGE("[Fix workshop rotation speed] patching...");
            {
                FixWorkshopRotSpeed code(FixWSRotationSpeedAddress);
                IF4SE::GetBranchTrampoline().Write5Branch(FixWSRotationSpeedAddress, code.get());
            }
            _MESSAGE("[Fix workshop rotation speed] OK");
            safe_memset(FixWSRotationSpeedAddress + 0x5, 0x90, 0x3);
        }
        if (m_conf.fixloadmodel) {
            //Fix trigger zoom speed
            float ZoomSpeed = GetINIFloat("Interface", "fLoadingModel_TriggerZoomSpeed", 0.02f) / 0.017;
            float MouseToRotateSpeed = GetINIFloat("Interface", "fLoadingModel_MouseToRotateSpeed", 0.005f) / 0.017;
            {
                struct FixLoadModelSpeed1 : JITASM::JITASM {
                    FixLoadModelSpeed1(
                        std::uintptr_t retnAddr,
                        float* a_zoomspeed)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label valueLabel;
                        Xbyak::Label timerLabel;
                        Xbyak::Label retnLabel;
                        
                        movss(xmm1, dword[rip + valueLabel]);
                        mov(rcx, ptr[rip + timerLabel]);
                        mulss(xmm1, dword[rcx]);
                        
                        jmp(ptr[rip + retnLabel]);
                        
                        L(retnLabel);
                        dq(retnAddr + 0x8);
                        
                        L(valueLabel);
                        db(reinterpret_cast<Xbyak::uint8*>(a_zoomspeed), sizeof(float));
                        
                        L(timerLabel);
                        dq(std::uintptr_t(Game::g_frameTimer));
                    }
                };
                _MESSAGE("[Fix loading model] patching...");
                {
                    FixLoadModelSpeed1 code(FixTriggerZoomSpeedAddress, &ZoomSpeed);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixTriggerZoomSpeedAddress, code.get());
                }
                safe_memset(FixTriggerZoomSpeedAddress + 0x5, 0x90, 0x3);
            }
            {
                //Right trigger
                struct FixLoadModelSpeed2 : JITASM::JITASM {
                    FixLoadModelSpeed2(
                        std::uintptr_t retnAddr,
                        float* a_zoomspeed)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label valueLabel;
                        Xbyak::Label timerLabel;
                        Xbyak::Label retnLabel;

                        movss(xmm1, dword[rip + valueLabel]);
                        mov(rcx, ptr[rip + timerLabel]);
                        mulss(xmm1, dword[rcx]);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x8);

                        L(valueLabel);
                        db(reinterpret_cast<Xbyak::uint8*>(a_zoomspeed), sizeof(float));

                        L(timerLabel);
                        dq(std::uintptr_t(Game::g_frameTimer));
                    }
                };
                {
                    FixLoadModelSpeed2 code(FixRightTriggerSpeedAddress, &ZoomSpeed);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixRightTriggerSpeedAddress, code.get());
                }
                safe_memset(FixRightTriggerSpeedAddress + 0x5, 0x90, 0x3);
            }
            {
                //Fix repeat rate
                struct FixLoadModelSpeed3 : JITASM::JITASM {
                    FixLoadModelSpeed3(std::uintptr_t retnAddr)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label retnLabel;
                        Xbyak::Label magicLabel;

                        mov(ecx, ptr[rbx + 0x26C]);
                        movss(xmm8, dword[rip + magicLabel]);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x6);

                        L(magicLabel);
                        dd(0x3c88888a); // 0.016667
                    }
                };
                {
                    FixLoadModelSpeed3 code(FixRepeateRateAddress);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixRepeateRateAddress, code.get());
                }
                safe_memset(FixRepeateRateAddress + 0x5, 0x90, 0x1);

                //Fix rotation
                safe_memset(FixLoadScreenRotAddress, 0x90, 0x6);
            }
            {
                //Fix pan speed
                //Up
                struct FixLoadModelSpeed4 : JITASM::JITASM {
                    FixLoadModelSpeed4(
                        std::uintptr_t retnAddr,
                        float* a_rotatespeed)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label retnLabel;
                        Xbyak::Label valueLabel;
                        Xbyak::Label timerLabel;

                        movss(xmm0, dword[rip + valueLabel]);
                        mov(rcx, ptr[rip + timerLabel]);
                        mulss(xmm0, dword[rcx]);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x8);

                        L(valueLabel);
                        db(reinterpret_cast<Xbyak::uint8*>(a_rotatespeed), sizeof(float));

                        L(timerLabel);
                        dq(std::uintptr_t(Game::g_frameTimer));
                    }
                };
                {
                    FixLoadModelSpeed4 code(FixLoadScreenRotateSpeed1Address, &MouseToRotateSpeed);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixLoadScreenRotateSpeed1Address, code.get());
                }
                safe_memset(FixLoadScreenRotateSpeed1Address + 0x5, 0x90, 0x3);
            }
            {
                //Down
                struct FixLoadModelSpeed5 : JITASM::JITASM {
                    FixLoadModelSpeed5(
                        std::uintptr_t retnAddr,
                        float* a_rotatespeed)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label retnLabel;
                        Xbyak::Label valueLabel;
                        Xbyak::Label timerLabel;

                        movss(xmm0, dword[rip + valueLabel]);
                        mov(rcx, ptr[rip + timerLabel]);
                        mulss(xmm0, dword[rcx]);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x8);

                        L(valueLabel);
                        db(reinterpret_cast<Xbyak::uint8*>(a_rotatespeed), sizeof(float));

                        L(timerLabel);
                        dq(std::uintptr_t(Game::g_frameTimer));
                    }
                };
                {
                    FixLoadModelSpeed5 code(FixLoadScreenRotateSpeed2Address, &MouseToRotateSpeed);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixLoadScreenRotateSpeed2Address, code.get());
                }
                safe_memset(FixLoadScreenRotateSpeed2Address + 0x5, 0x90, 0x3);
            }
            {
                //Left
                struct FixLoadModelSpeed6 : JITASM::JITASM {
                    FixLoadModelSpeed6(
                        std::uintptr_t retnAddr,
                        float* a_rotatespeed)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label retnLabel;
                        Xbyak::Label valueLabel;
                        Xbyak::Label timerLabel;

                        movss(xmm0, dword[rip + valueLabel]);
                        mov(rcx, ptr[rip + timerLabel]);
                        mulss(xmm0, dword[rcx]);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x8);

                        L(valueLabel);
                        db(reinterpret_cast<Xbyak::uint8*>(a_rotatespeed), sizeof(float));

                        L(timerLabel);
                        dq(std::uintptr_t(Game::g_frameTimer));
                    }
                };
                {
                    FixLoadModelSpeed6 code(FixLoadScreenRotateSpeed3Address, &MouseToRotateSpeed);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixLoadScreenRotateSpeed3Address, code.get());
                }
                safe_memset(FixLoadScreenRotateSpeed3Address + 0x5, 0x90, 0x3);
            }
            {
                //Right
                struct FixLoadModelSpeed7 : JITASM::JITASM {
                    FixLoadModelSpeed7(
                        std::uintptr_t retnAddr,
                        float* a_rotatespeed)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label retnLabel;
                        Xbyak::Label valueLabel;
                        Xbyak::Label timerLabel;

                        movss(xmm0, dword[rip + valueLabel]);
                        mov(rcx, ptr[rip + timerLabel]);
                        mulss(xmm0, dword[rcx]);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x8);

                        L(valueLabel);
                        db(reinterpret_cast<Xbyak::uint8*>(a_rotatespeed), sizeof(float));

                        L(timerLabel);
                        dq(std::uintptr_t(Game::g_frameTimer));
                    }
                };
                {
                    FixLoadModelSpeed7 code(FixLoadScreenRotateSpeed4Address, &MouseToRotateSpeed);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixLoadScreenRotateSpeed4Address, code.get());
                }
                _MESSAGE("[Fix loading model] OK");
                safe_memset(FixLoadScreenRotateSpeed4Address + 0x5, 0x90, 0x3);
            }
        }
        if (m_conf.fixstuckanim) {
                struct FixStuck : JITASM::JITASM {
                    FixStuck(std::uintptr_t retnAddr)
                        : JITASM(IF4SE::GetLocalTrampoline())
                    {
                        Xbyak::Label retnLabel;
                        Xbyak::Label magicLabel;

                        movss(xmm3, dword[rip + magicLabel]);

                        jmp(ptr[rip + retnLabel]);

                        L(retnLabel);
                        dq(retnAddr + 0x5);

                        L(magicLabel);
                        dd(0x3c8b4396); // 0.017
                    }
                };
                _MESSAGE("[Fix stuck animation] patching...");
                {
                    FixStuck code(FixStuckAnimAddress);
                    IF4SE::GetBranchTrampoline().Write5Branch(FixStuckAnimAddress, code.get());
                }
                _MESSAGE("[Fix stuck animation] OK");
        }
        if (m_conf.fixresponsive) {
            float MotionFeedbackMinSpeed = GetINIFloat("Animation", "fMotionFeedbackMinSpeed", 5.0f) / 0.017;
            struct FixLoadModelSpeed1 : JITASM::JITASM {
                FixLoadModelSpeed1(
                    std::uintptr_t retnAddr,
                    float* a_feedbackminspeed)
                    : JITASM(IF4SE::GetLocalTrampoline())
                {
                    Xbyak::Label valueLabel;
                    Xbyak::Label retnLabel;

                    movss(xmm1, dword[rip + valueLabel]);
                    mulss(xmm1, xmm6);
                    comiss(xmm0, xmm1);

                    jmp(ptr[rip + retnLabel]);

                    L(retnLabel);
                    dq(retnAddr + 0x7);

                    L(valueLabel);
                    db(reinterpret_cast<Xbyak::uint8*>(a_feedbackminspeed), sizeof(float));
                }
            };
            _MESSAGE("[Fix motion responsive] patching...");
            {
                FixLoadModelSpeed1 code(FixMotionFeedBackAddress, &MotionFeedbackMinSpeed);
                IF4SE::GetBranchTrampoline().Write5Branch(FixMotionFeedBackAddress, code.get());
            }
            _MESSAGE("[Fix motion responsive] OK");
            safe_memset(FixMotionFeedBackAddress + 0x5, 0x90, 0x2);
        }
        if (m_conf.fixobcpspeed) {
            PROCESSENTRY32   pe32;
            HANDLE         hSnapshot = NULL;
            pe32.dwSize = sizeof(PROCESSENTRY32);
            hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

            if (Process32First(hSnapshot, &pe32))
            {
                do {
                    if (strcmp(pe32.szExeFile, "Fallout4.exe") == 0)
                        break;
                } while (Process32Next(hSnapshot, &pe32));
            }

            if (hSnapshot != INVALID_HANDLE_VALUE)
                CloseHandle(hSnapshot);

            ProcId = pe32.th32ProcessID;
            f4handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, ProcId);
            DWORD_PTR baseadd = (DWORD_PTR)GetModuleHandle("fallout4.exe");
            SYSTEM_INFO SystemInfo;
            GetSystemInfo(&SystemInfo);
            nMaxProcessorAfterLoad = (1 << SystemInfo.dwNumberOfProcessors) - 1;
            fMaxTimeAddress = baseadd + 0x2C5FA80;
            iPresentIntervalAddress = baseadd + 0x61E0950;
            struct FixOBCP1 : JITASM::JITASM {
                FixOBCP1(std::uintptr_t retnAddr)
                    : JITASM(IF4SE::GetLocalTrampoline())
                {
                    Xbyak::Label retnLabel;
                    Xbyak::Label timerLabel;

                    mov(rax, ptr[rip + timerLabel]);
                    movss(xmm6, dword[rax]);

                    jmp(ptr[rip + retnLabel]);

                    L(retnLabel);
                    dq(retnAddr + 0x8);

                    L(timerLabel);
                    dq(std::uintptr_t(Game::g_frameTimer));
                }
            };
            //_MESSAGE("[Fix workshop rotation speed] patching...");
            {
                FixOBCP1 code(FixOBCPSpeed1Address);
                IF4SE::GetBranchTrampoline().Write5Branch(FixOBCPSpeed1Address, code.get());
                WriteProcessMemory(tesvhandle, (LPVOID)fMaxTimeAddress, &newvalue, sizeof(newvalue), 0);
            }
            //_MESSAGE("[Fix workshop rotation speed] OK");
            safe_memset(FixOBCPSpeed1Address + 0x5, 0xC3, 0x1);
        }
    }

    void DMisc::Patch_SetThreadsNG() {
        DWORD procId = GetCurrentProcessId();
        f4handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procId);
        SYSTEM_INFO SystemInfo;
        GetSystemInfo(&SystemInfo);
        nMaxProcessorMaskNG = (1 << m_conf.numthreads) - 1;
        nMaxProcessorAfterLoad = (1 << SystemInfo.dwNumberOfProcessors) - 1;
    }


    void DMisc::SetThreadsNG() {
        if (SDT::DMisc::m_conf.numthreads > 0) {
            LimitThreads = true;
            SetProcessAffinityMask(f4handle, nMaxProcessorMaskNG);
        }
    }

    void DMisc::ReturnThreadsNG() {
        if (LimitThreads) {
            LimitThreads = false;
            SetProcessAffinityMask(f4handle, nMaxProcessorAfterLoad);
        }
    }

    //void DMisc::SetThreads() {
        //SetProcessAffinityMask(f4handle, nMaxProcessorMask);  //����
    //}

    void DMisc::RegisterHooks()
    {
        if (m_conf.skipmissingini)
        {
            RegisterHook(
                SkipNoINI + 0x3,
                GetFnAddr(&Structures::_SettingCollectionList::LoadIni_Hook),
                HookDescriptor::HookType::kWR6Call
            );
        }
    }

    bool DMisc::Prepare()
    {
        return true;
    }
}
