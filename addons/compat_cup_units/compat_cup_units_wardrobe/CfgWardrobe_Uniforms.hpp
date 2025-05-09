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

// This could maybe be a MACRO
class CUP_U_O_RUS_Soldier_VKPO_Desert_1: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Desert_2;
        class CUP_U_O_RUS_Soldier_VKPO_Desert_3;
        class CUP_U_O_RUS_Soldier_VKPO_Desert_4;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_1;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Desert_2: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Desert_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_2;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Desert_3: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Desert_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_3;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Desert_4: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Desert_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_4;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_1: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Desert_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_2;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_3;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_4;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_2: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Desert_1;
        class CUP_U_O_RUS_Soldier_VKPO_Desert_2;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_3: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Desert_1;
        class CUP_U_O_RUS_Soldier_VKPO_Desert_3;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_4: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Desert_1;
        class CUP_U_O_RUS_Soldier_VKPO_Desert_4;
    };
    components[] = {};
};

class CUP_U_O_RUS_Soldier_VKPO_Summer_1: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Summer_2;
        class CUP_U_O_RUS_Soldier_VKPO_Summer_3;
        class CUP_U_O_RUS_Soldier_VKPO_Summer_4;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_1;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Summer_2: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Summer_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_2;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Summer_3: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Summer_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_3;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Summer_4: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Summer_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_4;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_1: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Summer_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_2;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_3;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_4;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_2: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Summer_1;
        class CUP_U_O_RUS_Soldier_VKPO_Summer_2;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_3: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Summer_1;
        class CUP_U_O_RUS_Soldier_VKPO_Summer_3;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_4: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Summer_1;
        class CUP_U_O_RUS_Soldier_VKPO_Summer_4;
    };
    components[] = {};
};

class CUP_U_O_RUS_Soldier_VKPO_Winter_1: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Winter_2;
        class CUP_U_O_RUS_Soldier_VKPO_Winter_3;
        class CUP_U_O_RUS_Soldier_VKPO_Winter_4;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_1;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Winter_2: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Winter_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_2;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Winter_3: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Winter_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_3;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Winter_4: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Winter_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_4;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_1: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Winter_1;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_2;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_3;
        class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_4;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_2: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Winter_1;
        class CUP_U_O_RUS_Soldier_VKPO_Winter_2;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_3: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Winter_1;
        class CUP_U_O_RUS_Soldier_VKPO_Winter_3;
    };
    components[] = {};
};
class CUP_U_O_RUS_Soldier_VKPO_Rolled_Winter_4: EGVAR(wardrobe,base) {
    class modifiyableTo {
        class CUP_U_O_RUS_Soldier_VKPO_Winter_1;
        class CUP_U_O_RUS_Soldier_VKPO_Winter_4;
    };
    components[] = {};
};