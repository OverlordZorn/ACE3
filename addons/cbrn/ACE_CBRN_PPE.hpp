// MACROs
#define FILTERMASK(MaskWithFilter,MaskWithoutFilter)\
class MaskWithFilter {\
    isFilterMask = 1;\
    isCoveringFace = 1;\
    canRemoveFilter = 1;\
    hasFilter = 1;\
    counterpart = QUOTE(MaskWithoutFilter);\
};\
class MaskWithoutFilter {\
    isFilterMask = 1;\
    isCoveringFace = 1;\
    canAddFilter = 1;\
    hasFilter = 0;\
    counterpart = QUOTE(MaskWithFilter);\
}


// Personal Protective Equipment
class GVAR(PPE) {
    // Self Contained Breathing Apperatus Backpacks
    class B_SCBA_01_F {
        isSCBA = 1;
        class compatibleMaskWithFilter {
            class G_RegulatorMask_F {
                2 = "a3\supplies_f_enoch\bags\data\b_scba_01_co.paa";
            };
            class G_AirPurifyingRespirator_01_nofilter_F {
                1 = "a3\supplies_f_enoch\bags\data\b_scba_01_co.paa";
            };
            class G_AirPurifyingRespirator_02_black_nofilter_F: G_AirPurifyingRespirator_01_nofilter_F {};
            class G_AirPurifyingRespirator_02_olive_nofilter_F: G_AirPurifyingRespirator_01_nofilter_F {};
            class G_AirPurifyingRespirator_02_sand_nofilter_F:  G_AirPurifyingRespirator_01_nofilter_F {};
        };
    };

    class B_CombinationUnitRespirator_01_F {
        isSCBA = 1;
        class compatibleMaskWithFilter {
            class G_RegulatorMask_F {
                1 = "a3\supplies_f_enoch\bags\data\b_cur_01_co.paa";
                3 = "a3\supplies_f_enoch\bags\data\b_cur_01_co.paa";
            };

            class G_AirPurifyingRespirator_01_nofilter_F {
                1 = "a3\supplies_f_enoch\bags\data\b_cur_01_co.paa";
                2 = "a3\supplies_f_enoch\bags\data\b_cur_01_co.paa";
            };

            class G_AirPurifyingRespirator_02_black_nofilter_F: G_AirPurifyingRespirator_01_nofilter_F {};
            class G_AirPurifyingRespirator_02_olive_nofilter_F: G_AirPurifyingRespirator_01_nofilter_F {};
            class G_AirPurifyingRespirator_02_sand_nofilter_F:  G_AirPurifyingRespirator_01_nofilter_F {};
        };
    };

    // FaceMasks

    class G_RegulatorMask_F {
        isCoveringFace = 1;
        hasFilter = 0;
    };

    FILTERMASK(G_AirPurifyingRespirator_01_F,G_AirPurifyingRespirator_01_nofilter_F);
    FILTERMASK(G_AirPurifyingRespirator_02_black_F,G_AirPurifyingRespirator_02_black_nofilter_F);
    FILTERMASK(G_AirPurifyingRespirator_02_olive_F,G_AirPurifyingRespirator_02_olive_nofilter_F);
    FILTERMASK(G_AirPurifyingRespirator_02_sand_F,G_AirPurifyingRespirator_02_sand_nofilter_F);

    // CBRN Suits
    class U_C_CBRN_Suit_01_White_F { isCBRNSuite = 1; };
    class U_B_CBRN_Suit_01_Tropic_F: U_C_CBRN_Suit_01_White_F {};
    class U_I_E_CBRN_Suit_01_EAF_F:  U_C_CBRN_Suit_01_White_F {};
    class U_C_CBRN_Suit_01_Blue_F:   U_C_CBRN_Suit_01_White_F {};
    class U_I_CBRN_Suit_01_AAF_F:    U_C_CBRN_Suit_01_White_F {};
    class U_B_CBRN_Suit_01_Wdl_F:    U_C_CBRN_Suit_01_White_F {};
    class U_B_CBRN_Suit_01_MTP_F:    U_C_CBRN_Suit_01_White_F {};
};
