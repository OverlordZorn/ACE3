// Macros
#define CUP_UNIFORM_TSHIRT(tshirtBase,tshirtGloves,tshirtKnee)\
class tshirtBase: EGVAR(wardrobe,base) {\
    class modifiableTo {\
        class tshirtGloves;\
        class tshirtKnee;\
    };\
};\
class tshirtGloves: EGVAR(wardrobe,base) {\
    class modifiableTo {\
        class tshirtBase;\
    };\
};\
class tshirtKnee: EGVAR(wardrobe,base) {\
    class modifiableTo {\
        class tshirtBase;\
    };\
}

#define CUP_UNIFORM_3(uniformBase,uniformVariant1,uniformVariant2)\
class uniformBase: EGVAR(wardrobe,base) {\
    class modifiableTo {\
        class uniformVariant1;\
        class uniformVariant2;\
    };\
};\
class uniformVariant1: EGVAR(wardrobe,base) {\
    class modifiableTo {\
        class uniformBase;\
    };\
};\
class uniformVariant2: EGVAR(wardrobe,base) {\
    class modifiableTo {\
        class uniformBase;\
    };\
}

//Army of the Czech Republic
UNIFORM_SLEEVES(CUP_U_B_CZ_DST_NoKneepads,CUP_U_B_CZ_DST_Kneepads_Sleeve);
UNIFORM_SLEEVES(CUP_U_B_CZ_DST_Kneepads,CUP_U_B_CZ_DST_Kneepads_Gloves);
UNIFORM_SLEEVES(CUP_U_B_CZ_WDL_NoKneepads,CUP_U_B_CZ_WDL_Kneepads_Gloves);
UNIFORM_SLEEVES(CUP_U_B_CZ_WDL_Kneepads,CUP_U_B_CZ_WDL_Kneepads_Gloves);

//Armed Forces of the Russian Federation
UNIFORM_SLEEVES(CUP_U_O_RUS_BeigeDigital_MSV,CUP_U_O_RUS_BeigeDigital_MSV_rolled_up);
UNIFORM_SLEEVES(CUP_U_O_RUS_BeigeDigital_MSV_gloves_pads,CUP_U_O_RUS_BeigeDigital_MSV_rolled_up_gloves_pads);
UNIFORM_SLEEVES(CUP_U_O_RUS_EMR_1,CUP_U_O_RUS_EMR_2);
UNIFORM_SLEEVES(CUP_U_O_RUS_Flora_1,CUP_U_O_RUS_Flora_2);
UNIFORM_SLEEVES(CUP_U_O_RUS_VSR93_MSV,CUP_U_O_RUS_VSR93_MSV_rolled_up);
UNIFORM_SLEEVES(CUP_U_O_RUS_VSR98_MSV,CUP_U_O_RUS_VSR98_MSV_rolled_up);
UNIFORM_SLEEVES(CUP_U_O_RUS_EMR_1_VDV,CUP_U_O_RUS_EMR_2_VDV);
UNIFORM_SLEEVES(CUP_U_O_RUS_EMR_VDV_gloves_pads,CUP_U_O_RUS_EMR_VDV_rolled_up_gloves_pads);
UNIFORM_SLEEVES(CUP_U_O_RUS_KSOR_VDV,CUP_U_O_RUS_KSOR_VDV_rolled_up);
UNIFORM_SLEEVES(CUP_U_O_RUS_KSOR_VDV_gloves_pads,CUP_U_O_RUS_KSOR_VDV_rolled_up_gloves_pads);
UNIFORM_SLEEVES(CUP_U_O_RUS_VSR93_VDV,CUP_U_O_RUS_VSR93_VDV_rolled_up);
UNIFORM_SLEEVES(CUP_U_O_RUS_VSR93_VDV_rolled_up,CUP_U_O_RUS_VSR93_VDV_rolled_up_gloves2);
UNIFORM_SLEEVES(CUP_U_O_RUS_VSR98_VDV,CUP_U_O_RUS_VSR98_VDV_rolled_up);
UNIFORM_SLEEVES(CUP_U_O_RUS_VSR98_VDV_rolled_up,CUP_U_O_RUS_VSR98_VDV_rolled_up_gloves2);
UNIFORM_SLEEVES(CUP_U_O_RUS_M88_MSV,CUP_U_O_RUS_M88_MSV_rolled_up);
UNIFORM_SLEEVES(CUP_U_O_RUS_M88_VDV,CUP_U_O_RUS_M88_VDV_rolled_up);


// ToDo MACRO
class CUP_U_O_RUS_Soldier_Masking_Suit_6Sh119_Winter_1: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_Masking_Suit_6Sh119_Winter_2;
        class CUP_U_O_RUS_Soldier_Masking_Suit_6Sh119_Winter_3;
        class CUP_U_O_RUS_Soldier_Masking_Suit_6Sh119_Winter_4;
    };
};
class CUP_U_O_RUS_Soldier_Masking_Suit_6Sh119_Winter_2: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_Masking_Suit_6Sh119_Winter_1;
    };
};
class CUP_U_O_RUS_Soldier_Masking_Suit_6Sh119_Winter_3: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_Masking_Suit_6Sh119_Winter_1;
    };
};
class CUP_U_O_RUS_Soldier_Masking_Suit_6Sh119_Winter_4: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_Masking_Suit_6Sh119_Winter_1;
    };
};

//CUP_U_O_RUS_VSR93_MSV ->CUP_U_O_RUS_VSR93_MSV_rolled_up
//CUP_U_O_RUS_VSR93_MSV -> CUP_U_O_RUS_VSR93_worn_gloves_MSV

//CUP_U_O_RUS_VSR98_worn_MSV ->CUP_U_O_RUS_VSR98_worn_MSV_rolled_up
//CUP_U_O_RUS_VSR98_worn_MSV -> CUP_U_O_RUS_VSR98_worn_gloves_MSV

//CUP_U_O_RUS_Flora_1_VDV ->CUP_U_O_RUS_Flora_2_VDV
//CUP_U_O_RUS_Flora_1_VDV -> CUP_U_O_RUS_Flora_3

//CUP_U_O_RUS_VSR98_worn_VDV ->CUP_U_O_RUS_VSR98_worn_gloves_VDV
//CUP_U_O_RUS_VSR98_worn_VDV -> CUP_U_O_RUS_VSR98_worn_VDV_rolled_up
//CUP_U_O_RUS_VSR98_worn_VDV_rolled_up -> CUP_U_O_RUS_VSR98_worn_VDV_rolled_up_gloves2
//CUP_U_O_RUS_VSR98_worn_VDV_rolled_up_gloves2 -> CUP_U_O_RUS_VSR98_worn_gloves_VDV

// ToDo MACRO
class CUP_U_O_RUS_Soldier_VKPO_Desert_1: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Desert_2;
        class CUP_U_O_RUS_Soldier_VKPO_Desert_3;
        class CUP_U_O_RUS_Soldier_VKPO_Desert_4;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_1;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Desert_2: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Desert_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_2;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Desert_3: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Desert_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_3;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Desert_4: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Desert_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_4;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_1: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Desert_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_2;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_3;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_4;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_2: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Desert_1;
        class CUP_U_O_RUS_Soldier_VKPO_Desert_2;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_3: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Desert_1;
        class CUP_U_O_RUS_Soldier_VKPO_Desert_3;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_4: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Desert_1;
        class CUP_U_O_RUS_Soldier_VKPO_Desert_4;
    };
    components[] = {};
};

class CUP_U_O_RUS_Soldier_VKPO_Summer_1: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Summer_2;
        class CUP_U_O_RUS_Soldier_VKPO_Summer_3;
        class CUP_U_O_RUS_Soldier_VKPO_Summer_4;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_1;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Summer_2: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Summer_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_2;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Summer_3: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Summer_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_3;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Summer_4: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Summer_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_4;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_1: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Summer_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_2;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_3;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_4;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_2: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Summer_1;
        class CUP_U_O_RUS_Soldier_VKPO_Summer_2;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_3: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Summer_1;
        class CUP_U_O_RUS_Soldier_VKPO_Summer_3;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_4: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Summer_1;
        class CUP_U_O_RUS_Soldier_VKPO_Summer_4;
    };
    components[] = {};
};

class CUP_U_O_RUS_Soldier_VKPO_Winter_1: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Winter_2;
        class CUP_U_O_RUS_Soldier_VKPO_Winter_3;
        class CUP_U_O_RUS_Soldier_VKPO_Winter_4;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_1;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Winter_2: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Winter_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_2;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Winter_3: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Winter_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_3;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Winter_4: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Winter_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_4;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_1: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Winter_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_2;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_3;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_4;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_2: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Winter_1;
        class CUP_U_O_RUS_Soldier_VKPO_Winter_2;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_3: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Winter_1;
        class CUP_U_O_RUS_Soldier_VKPO_Winter_3;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_4: EGVAR(wardrobe,base) {
    class modifiableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Winter_1;
        class CUP_U_O_RUS_Soldier_VKPO_Winter_4;
    };
    components[] = {};
};

// Gorka
CUP_UNIFORM_3(CUP_U_O_RUS_Gorka_Green,CUP_U_O_RUS_Gorka_Green_gloves2,CUP_U_O_RUS_Gorka_Green_gloves_kneepads);
CUP_UNIFORM_3(CUP_U_O_RUS_Gorka_Partizan_A,CUP_U_O_RUS_Gorka_Partizan_A_gloves2,CUP_U_O_RUS_Gorka_Partizan_A_gloves_kneepads);
CUP_UNIFORM_3(CUP_U_O_RUS_Gorka_Partizan,CUP_U_O_RUS_Gorka_Partizan_gloves2,CUP_U_O_RUS_Gorka_Partizan_gloves_kneepads);


// British Armed Forces
CUP_UNIFORM_TSHIRT(CUP_U_B_BAF_MTP_UBACSTSHIRT,CUP_U_B_BAF_MTP_UBACSTSHIRT_Gloves,CUP_U_B_BAF_MTP_UBACSTSHIRTKNEE);
CUP_UNIFORM_TSHIRT(CUP_U_B_BAF_DPM_UBACSTSHIRT,CUP_U_B_BAF_DPM_UBACSTSHIRT_Gloves,CUP_U_B_BAF_DPM_UBACSTSHIRTKNEE);
CUP_UNIFORM_TSHIRT(CUP_U_B_BAF_DDPM_UBACSTSHIRT,CUP_U_B_BAF_DDPM_UBACSTSHIRT_Gloves,CUP_U_B_BAF_DDPM_UBACSTSHIRTKNEE);

// Crye
UNIFORM_SLEEVES(CUP_U_CRYE_ATACSAU_Full,CUP_U_CRYE_ATACSAU_Roll);
UNIFORM_SLEEVES(CUP_U_CRYE_ATACSFG_Full,CUP_U_CRYE_ATACSFG_Roll);
UNIFORM_SLEEVES(CUP_U_CRYE_BLK_Full,CUP_U_CRYE_BLK_Roll);
UNIFORM_SLEEVES(CUP_U_CRYE_BLK_RUS_Full,CUP_U_CRYE_BLK_RUS_Roll);
UNIFORM_SLEEVES(CUP_U_CRYE_MCAM_NP_Full,CUP_U_CRYE_MCAM_NP_Roll);
UNIFORM_SLEEVES(CUP_U_CRYE_MCAM_RUS_Full,CUP_U_CRYE_MCAM_RUS_Roll);
UNIFORM_SLEEVES(CUP_U_CRYE_MCAM_NP2_Full,CUP_U_CRYE_MCAM_NP2_Roll);
UNIFORM_SLEEVES(CUP_U_CRYE_MCAM_RUS2_Full,CUP_U_CRYE_MCAM_RUS2_Roll);
UNIFORM_SLEEVES(CUP_U_CRYE_V1_Full,CUP_U_CRYE_V1_Roll);
UNIFORM_SLEEVES(CUP_U_CRYE_V2_Full,CUP_U_CRYE_V2_Roll);
UNIFORM_SLEEVES(CUP_U_CRYE_V3_Full,CUP_U_CRYE_V3_Roll);
UNIFORM_SLEEVES(CUP_U_CRYE_RGR_Full,CUP_U_CRYE_RGR_Roll);
UNIFORM_SLEEVES(CUP_U_CRYE_V2_Full,CUP_U_CRYE_V2_Roll);
UNIFORM_SLEEVES(CUP_U_CRYE_RGR_US_Full,CUP_U_CRYE_RGR_US_Roll);
UNIFORM_SLEEVES(CUP_U_CRYE_TAN_Full,CUP_U_CRYE_TAN_Roll);
UNIFORM_SLEEVES(CUP_U_CRYE_TAN_US_Full,CUP_U_CRYE_TAN_US_Roll);  
UNIFORM_SLEEVES(CUP_U_B_GER_Fleck_Crye,CUP_U_B_GER_Fleck_Crye2);
UNIFORM_SLEEVES(CUP_U_B_GER_Crye,CUP_U_B_GER_Crye2);

// German Army

// Horizon Island Legion

// Rebels
BASE_PAIR(CUP_U_I_GUE_Anorak_01,CUP_U_I_GUE_Anorak_03);
BASE_PAIR(CUP_U_I_GUE_Flecktarn2,CUP_U_I_GUE_Flecktarn3);
BASE_PAIR(CUP_U_I_GUE_Flecktarn2,CUP_U_I_GUE_Flecktarn3);

// PMC
BASE_PAIR(CUP_I_B_PMC_Unit_30,CUP_I_B_PMC_Unit_29);
BASE_PAIR(CUP_I_B_PMC_Unit_27,CUP_I_B_PMC_Unit_26);
BASE_PAIR(CUP_I_B_PMC_Unit_25,CUP_I_B_PMC_Unit_18);
BASE_PAIR(CUP_I_B_PMC_Unit_34,CUP_I_B_PMC_Unit_33);

//Royal Army Corps of Sahrani
BASE_PAIR(CUP_U_I_RACS_Desert_1,CUP_U_I_RACS_Desert_2);
BASE_PAIR(CUP_U_I_RACS_mech_1,CUP_U_I_RACS_mech_2);
BASE_PAIR(CUP_U_I_RACS_Urban_1,CUP_U_I_RACS_Urban_2);
BASE_PAIR(CUP_U_I_RACS_WDL_1,CUP_U_I_RACS_WDL_2);

// US Army
BASE_PAIR(CUP_U_B_USArmy_Base,CUP_U_B_USArmy_TwoKnee);

// USMC