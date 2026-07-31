// Personal Protective Equipment
class GVAR(PPE) {
    class B_SCBA_01_F {
        isSCBA = 1;
        class compatibleWith {
            class G_RegulatorMask_F {
                class textures {
                    2 = "a3\supplies_f_enoch\bags\data\b_scba_01_co.paa";
                };
            }
        };
    };

    class B_CombinationUnitRespirator_01_F {

    };

    class maskWithFilter {
        isCoveringEyes = 1;
        isCoveringFace = 1;
        isFilterMask = 1;
        hasFilter = 1;
        counterpart = "classname";
    };

    class maskWithoutFilter {
        isCoveringEyes = 1;
        isCoveringFace = 1;
        isFilterMask = 1;
        hasFilter = 0;
        coutnerpart = "classname";
    };

    class them_fancy_cbrnSuits {
        isCBRNSuite = 1;
    };
};
