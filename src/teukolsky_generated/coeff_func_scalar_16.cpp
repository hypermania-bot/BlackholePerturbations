#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_800(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[800] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[800] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((210)*(expr[2]))+(((-364)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_801(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[801] = ((1.20312500000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.66233766233766233766233766234));
} else {
coeffs[801] = ((1.20312500000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-21)*(expr[1]))+(((170)*(expr[2]))+(((-474)*(expr[3]))+(((549)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_802(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[802] = ((1.20312500000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.66233766233766233766233766234));
} else {
coeffs[802] = ((1.20312500000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((21)*(expr[1]))+(((-170)*(expr[2]))+(((474)*(expr[3]))+(((-549)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_803(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[803] = ((1.20312500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.337662337662337662337662337662)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-23)*(M))+(r))))))+(((-32.7272727272727272727272727273)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((3.20000000000000000000000000000)*(((8)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((8)*(r)))))))+(((-6.85714285714285714285714285714)*(((11)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((11)*(r)))))))+((2.66666666666666666666666666667)*(((32)*(pow(a,3)))+((a)*((r)*(((-247)*(M))+((32)*(r))))))))))))));
} else {
coeffs[803] = ((1.20312500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-170)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((474)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-549)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((-4)*(((pow(a,3))+((a)*((r)*(((-23)*(M))+(r)))))*(expr[1])))+(((8)*((((8)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((8)*(r))))))*(expr[2])))+(((-24)*((((11)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((11)*(r))))))*(expr[3])))+(((12)*((((32)*(pow(a,3)))+((a)*((r)*(((-247)*(M))+((32)*(r))))))*(expr[4])))+((-180)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_804(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[804] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[804] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((69)*(expr[1]))+(((-650)*(expr[2]))+(((2058)*(expr[3]))+(((-2565)*(expr[4]))+((1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_805(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[805] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[805] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-69)*(expr[1]))+(((650)*(expr[2]))+(((-2058)*(expr[3]))+(((2565)*(expr[4]))+((-1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_806(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[806] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((228.461538461538461538461538462)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-0.666666666666666666666666666667)*((a)*(((17)*(pow(a,2)))+((r)*(((242)*(M))+((17)*(r)))))))+(((-12)*(((41)*(pow(a,3)))+((a)*((r)*(((114)*(M))+((41)*(r)))))))+(((2)*(((61)*(pow(a,3)))+((a)*((r)*(((398)*(M))+((61)*(r)))))))+(((-1.63636363636363636363636363636)*(((445)*(pow(a,3)))+((a)*((r)*(((-406)*(M))+((445)*(r)))))))+((1.33333333333333333333333333333)*(((659)*(pow(a,3)))+((a)*((r)*(((392)*(M))+((659)*(r))))))))))))));
} else {
coeffs[806] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-69)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((650)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2058)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((2565)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-1089)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*((((17)*(pow(a,2)))+((r)*(((242)*(M))+((17)*(r)))))*(expr[1]))))+(((5)*((((61)*(pow(a,3)))+((a)*((r)*(((398)*(M))+((61)*(r))))))*(expr[2])))+(((-42)*((((41)*(pow(a,3)))+((a)*((r)*(((114)*(M))+((41)*(r))))))*(expr[3])))+(((6)*((((659)*(pow(a,3)))+((a)*((r)*(((392)*(M))+((659)*(r))))))*(expr[4])))+(((-9)*((((445)*(pow(a,3)))+((a)*((r)*(((-406)*(M))+((445)*(r))))))*(expr[5])))+((1485)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_807(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[807] = ((0.0156250000000000000000000000000)*((5.74456264653802865985061146822)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[807] = ((0.0156250000000000000000000000000)*((5.74456264653802865985061146822)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((15)*(expr[1]))+(((-105)*(expr[2]))+((105)*(expr[3]))))));
}
}

void compute_coeffs_scalar_808(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[808] = ((0.0156250000000000000000000000000)*((7.41619848709566294871139744080)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[808] = ((0.0156250000000000000000000000000)*((7.41619848709566294871139744080)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-45)*(expr[1]))+(((175)*(expr[2]))+((-147)*(expr[3]))))));
}
}

void compute_coeffs_scalar_809(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[809] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[809] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-300)*(expr[1]))+(((1730)*(expr[2]))+(((-2940)*(expr[3]))+((1575)*(expr[4])))))));
}
}

void compute_coeffs_scalar_810(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[810] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[810] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((156)*(expr[1]))+(((-1050)*(expr[2]))+(((2156)*(expr[3]))+((-1323)*(expr[4])))))));
}
}

void compute_coeffs_scalar_811(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[811] = ((0.0214843750000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(46.5454545454545454545454545455));
} else {
coeffs[811] = ((0.0214843750000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((813)*(expr[1]))+(((-7070)*(expr[2]))+(((21378)*(expr[3]))+(((-26019)*(expr[4]))+((11025)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_812(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[812] = ((0.0429687500000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-46.5454545454545454545454545455));
} else {
coeffs[812] = ((0.0429687500000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-813)*(expr[1]))+(((7070)*(expr[2]))+(((-21378)*(expr[3]))+(((26019)*(expr[4]))+((-11025)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_813(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[813] = ((0.0214843750000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-46.5454545454545454545454545455));
} else {
coeffs[813] = ((0.0214843750000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-813)*(expr[1]))+(((7070)*(expr[2]))+(((-21378)*(expr[3]))+(((26019)*(expr[4]))+((-11025)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_814(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[814] = ((0.0429687500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-44.5454545454545454545454545455)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((801.818181818181818181818181818)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((-65.3333333333333333333333333333)*(((28)*(pow(a,3)))+((a)*((r)*(((-233)*(M))+((28)*(r)))))))+(((0.666666666666666666666666666667)*(((58)*(pow(a,3)))+((2)*((a)*((r)*(((-871)*(M))+((29)*(r))))))))+(((-11.2000000000000000000000000000)*(((38)*(pow(a,3)))+((a)*((r)*(((-581)*(M))+((38)*(r)))))))+((24)*(((59)*(pow(a,3)))+((a)*((r)*(((-627)*(M))+((59)*(r))))))))))))));
} else {
coeffs[814] = ((0.0429687500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-813)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((7070)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-21378)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((26019)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-11025)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((((58)*(pow(a,3)))+((2)*((a)*((r)*(((-871)*(M))+((29)*(r)))))))*(expr[1]))+(((-28)*((((38)*(pow(a,3)))+((a)*((r)*(((-581)*(M))+((38)*(r))))))*(expr[2])))+(((84)*((((59)*(pow(a,3)))+((a)*((r)*(((-627)*(M))+((59)*(r))))))*(expr[3])))+(((-294)*((((28)*(pow(a,3)))+((a)*((r)*(((-233)*(M))+((28)*(r))))))*(expr[4])))+((4410)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_815(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[815] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[815] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-315)*(expr[1]))+(((3290)*(expr[2]))+(((-11550)*(expr[3]))+(((16065)*(expr[4]))+((-7623)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_816(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[816] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[816] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((315)*(expr[1]))+(((-3290)*(expr[2]))+(((11550)*(expr[3]))+(((-16065)*(expr[4]))+((7623)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_817(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[817] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[817] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((315)*(expr[1]))+(((-3290)*(expr[2]))+(((11550)*(expr[3]))+(((-16065)*(expr[4]))+((7623)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_818(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[818] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-20)*((a)*((M)*(r))))+(((-3198.46153846153846153846153846)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((46.6666666666666666666666666667)*(((2)*(pow(a,3)))+((a)*((r)*(((5)*(M))+((2)*(r)))))))+(((-28)*(((49)*(pow(a,3)))+((a)*((r)*(((-4)*(M))+((49)*(r)))))))+(((24)*(((248)*(pow(a,3)))+((a)*((r)*(((-221)*(M))+((248)*(r)))))))+(((22.9090909090909090909090909091)*(((430)*(pow(a,3)))+((a)*((r)*(((-739)*(M))+((430)*(r)))))))+((-6.66666666666666666666666666667)*(((1702)*(pow(a,3)))+((a)*((r)*(((-2333)*(M))+((1702)*(r))))))))))))));
} else {
coeffs[818] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((315)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-3290)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((11550)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-16065)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((7623)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*((r)*(expr[0])))))+(((70)*((((2)*(pow(a,3)))+((a)*((r)*(((5)*(M))+((2)*(r))))))*(expr[1])))+(((-70)*((((49)*(pow(a,3)))+((a)*((r)*(((-4)*(M))+((49)*(r))))))*(expr[2])))+(((84)*((((248)*(pow(a,3)))+((a)*((r)*(((-221)*(M))+((248)*(r))))))*(expr[3])))+(((-30)*((((1702)*(pow(a,3)))+((a)*((r)*(((-2333)*(M))+((1702)*(r))))))*(expr[4])))+(((126)*((((430)*(pow(a,3)))+((a)*((r)*(((-739)*(M))+((430)*(r))))))*(expr[5])))+((-20790)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_819(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[819] = ((0.187500000000000000000000000000)*((7.41619848709566294871139744080)*(((pow(a,2))+((-15)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[819] = ((0.187500000000000000000000000000)*((7.41619848709566294871139744080)*(((pow(a,2))+((-15)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((35)*(expr[2]))+((-21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_820(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[820] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*(((pow(a,2))+((-15)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[820] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*(((pow(a,2))+((-15)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((20)*(expr[1]))+(((-110)*(expr[2]))+(((196)*(expr[3]))+((-105)*(expr[4])))))));
}
}

void compute_coeffs_scalar_821(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[821] = ((1.28906250000000000000000000000)*(((pow(a,2))+((-15)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.55151515151515151515151515152));
} else {
coeffs[821] = ((1.28906250000000000000000000000)*(((pow(a,2))+((-15)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-29)*(expr[1]))+(((266)*(expr[2]))+(((-826)*(expr[3]))+(((1029)*(expr[4]))+((-441)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_822(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[822] = ((1.28906250000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.55151515151515151515151515152));
} else {
coeffs[822] = ((1.28906250000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((29)*(expr[1]))+(((-266)*(expr[2]))+(((826)*(expr[3]))+(((-1029)*(expr[4]))+((441)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_823(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[823] = ((0.644531250000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.55151515151515151515151515152));
} else {
coeffs[823] = ((0.644531250000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((29)*(expr[1]))+(((-266)*(expr[2]))+(((826)*(expr[3]))+(((-1029)*(expr[4]))+((441)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_824(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[824] = ((1.28906250000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.448484848484848484848484848485)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))));
} else {
coeffs[824] = ((1.28906250000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((29)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-266)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((826)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-1029)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((441)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))))))));
}
}

void compute_coeffs_scalar_825(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[825] = ((0.0234375000000000000000000000000)*((70.7460246232959721630584574287)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((-0.596736596736596736596736596737)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r)))))));
} else {
coeffs[825] = ((0.0234375000000000000000000000000)*((70.7460246232959721630584574287)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((105)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((-658)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+(((1650)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))+(((-1785)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5]))))+((693)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))));
}
}

void compute_coeffs_scalar_826(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[826] = ((0.0156250000000000000000000000000)*((5.74456264653802865985061146822)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[826] = ((0.0156250000000000000000000000000)*((5.74456264653802865985061146822)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((15)*(expr[1]))+(((-105)*(expr[2]))+((105)*(expr[3]))))));
}
}

void compute_coeffs_scalar_827(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[827] = ((0.0156250000000000000000000000000)*((7.41619848709566294871139744080)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[827] = ((0.0156250000000000000000000000000)*((7.41619848709566294871139744080)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((45)*(expr[1]))+(((-175)*(expr[2]))+((147)*(expr[3]))))));
}
}

void compute_coeffs_scalar_828(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[828] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[828] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-300)*(expr[1]))+(((1730)*(expr[2]))+(((-2940)*(expr[3]))+((1575)*(expr[4])))))));
}
}

void compute_coeffs_scalar_829(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[829] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[829] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-156)*(expr[1]))+(((1050)*(expr[2]))+(((-2156)*(expr[3]))+((1323)*(expr[4])))))));
}
}

void compute_coeffs_scalar_830(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[830] = ((0.0214843750000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(46.5454545454545454545454545455));
} else {
coeffs[830] = ((0.0214843750000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((813)*(expr[1]))+(((-7070)*(expr[2]))+(((21378)*(expr[3]))+(((-26019)*(expr[4]))+((11025)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_831(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[831] = ((0.0429687500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-44.5454545454545454545454545455)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((-801.818181818181818181818181818)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((65.3333333333333333333333333333)*(((28)*(pow(a,3)))+((a)*((r)*(((-233)*(M))+((28)*(r)))))))+(((-1.33333333333333333333333333333)*((a)*(((29)*(pow(a,2)))+((r)*(((-871)*(M))+((29)*(r)))))))+(((11.2000000000000000000000000000)*(((38)*(pow(a,3)))+((a)*((r)*(((-581)*(M))+((38)*(r)))))))+((-24)*(((59)*(pow(a,3)))+((a)*((r)*(((-627)*(M))+((59)*(r))))))))))))));
} else {
coeffs[831] = ((0.0429687500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-813)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((7070)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-21378)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((26019)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-11025)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((a)*((((29)*(pow(a,2)))+((r)*(((-871)*(M))+((29)*(r)))))*(expr[1]))))+(((28)*((((38)*(pow(a,3)))+((a)*((r)*(((-581)*(M))+((38)*(r))))))*(expr[2])))+(((-84)*((((59)*(pow(a,3)))+((a)*((r)*(((-627)*(M))+((59)*(r))))))*(expr[3])))+(((294)*((((28)*(pow(a,3)))+((a)*((r)*(((-233)*(M))+((28)*(r))))))*(expr[4])))+((-4410)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_832(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[832] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[832] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((27)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((315)*(expr[1]))+(((-3290)*(expr[2]))+(((11550)*(expr[3]))+(((-16065)*(expr[4]))+((7623)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_833(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[833] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[833] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-315)*(expr[1]))+(((3290)*(expr[2]))+(((-11550)*(expr[3]))+(((16065)*(expr[4]))+((-7623)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_834(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[834] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[834] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-315)*(expr[1]))+(((3290)*(expr[2]))+(((-11550)*(expr[3]))+(((16065)*(expr[4]))+((-7623)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_835(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[835] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-20)*((a)*((M)*(r))))+(((-3198.46153846153846153846153846)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((46.6666666666666666666666666667)*(((2)*(pow(a,3)))+((a)*((r)*(((5)*(M))+((2)*(r)))))))+(((-28)*(((49)*(pow(a,3)))+((a)*((r)*(((-4)*(M))+((49)*(r)))))))+(((24)*(((248)*(pow(a,3)))+((a)*((r)*(((-221)*(M))+((248)*(r)))))))+(((22.9090909090909090909090909091)*(((430)*(pow(a,3)))+((a)*((r)*(((-739)*(M))+((430)*(r)))))))+((-6.66666666666666666666666666667)*(((1702)*(pow(a,3)))+((a)*((r)*(((-2333)*(M))+((1702)*(r))))))))))))));
} else {
coeffs[835] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-315)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((3290)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-11550)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((16065)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-7623)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*((r)*(expr[0])))))+(((70)*((((2)*(pow(a,3)))+((a)*((r)*(((5)*(M))+((2)*(r))))))*(expr[1])))+(((-70)*((((49)*(pow(a,3)))+((a)*((r)*(((-4)*(M))+((49)*(r))))))*(expr[2])))+(((84)*((((248)*(pow(a,3)))+((a)*((r)*(((-221)*(M))+((248)*(r))))))*(expr[3])))+(((-30)*((((1702)*(pow(a,3)))+((a)*((r)*(((-2333)*(M))+((1702)*(r))))))*(expr[4])))+(((126)*((((430)*(pow(a,3)))+((a)*((r)*(((-739)*(M))+((430)*(r))))))*(expr[5])))+((-20790)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_836(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[836] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[836] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((35)*(expr[2]))+((-21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_837(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[837] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[837] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-50)*(expr[2]))+(((84)*(expr[3]))+((-45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_838(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[838] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[838] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-210)*(expr[2]))+(((364)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_839(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[839] = ((1.20312500000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.66233766233766233766233766234));
} else {
coeffs[839] = ((1.20312500000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-21)*(expr[1]))+(((170)*(expr[2]))+(((-474)*(expr[3]))+(((549)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_840(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[840] = ((1.20312500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.337662337662337662337662337662)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-23)*(M))+(r))))))+(((32.7272727272727272727272727273)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((-3.20000000000000000000000000000)*(((8)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((8)*(r)))))))+(((6.85714285714285714285714285714)*(((11)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((11)*(r)))))))+((-2.66666666666666666666666666667)*(((32)*(pow(a,3)))+((a)*((r)*(((-247)*(M))+((32)*(r))))))))))))));
} else {
coeffs[840] = ((1.20312500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-170)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((474)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-549)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((4)*(((pow(a,3))+((a)*((r)*(((-23)*(M))+(r)))))*(expr[1])))+(((-8)*((((8)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((8)*(r))))))*(expr[2])))+(((24)*((((11)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((11)*(r))))))*(expr[3])))+(((-12)*((((32)*(pow(a,3)))+((a)*((r)*(((-247)*(M))+((32)*(r))))))*(expr[4])))+((180)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_841(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[841] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[841] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-69)*(expr[1]))+(((650)*(expr[2]))+(((-2058)*(expr[3]))+(((2565)*(expr[4]))+((-1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_842(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[842] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[842] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((69)*(expr[1]))+(((-650)*(expr[2]))+(((2058)*(expr[3]))+(((-2565)*(expr[4]))+((1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_843(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[843] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((228.461538461538461538461538462)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-0.666666666666666666666666666667)*((a)*(((17)*(pow(a,2)))+((r)*(((242)*(M))+((17)*(r)))))))+(((-12)*(((41)*(pow(a,3)))+((a)*((r)*(((114)*(M))+((41)*(r)))))))+(((2)*(((61)*(pow(a,3)))+((a)*((r)*(((398)*(M))+((61)*(r)))))))+(((-1.63636363636363636363636363636)*(((445)*(pow(a,3)))+((a)*((r)*(((-406)*(M))+((445)*(r)))))))+((1.33333333333333333333333333333)*(((659)*(pow(a,3)))+((a)*((r)*(((392)*(M))+((659)*(r)))))))))))))));
} else {
coeffs[843] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((69)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-650)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2058)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-2565)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((1089)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*((((17)*(pow(a,2)))+((r)*(((242)*(M))+((17)*(r)))))*(expr[1]))))+(((5)*((((61)*(pow(a,3)))+((a)*((r)*(((398)*(M))+((61)*(r))))))*(expr[2])))+(((-42)*((((41)*(pow(a,3)))+((a)*((r)*(((114)*(M))+((41)*(r))))))*(expr[3])))+(((6)*((((659)*(pow(a,3)))+((a)*((r)*(((392)*(M))+((659)*(r))))))*(expr[4])))+(((-9)*((((445)*(pow(a,3)))+((a)*((r)*(((-406)*(M))+((445)*(r))))))*(expr[5])))+((1485)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_844(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[844] = ((0.0820312500000000000000000000000)*((5.24404424085075773495726756840)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((19)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[844] = ((0.0820312500000000000000000000000)*((5.24404424085075773495726756840)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((19)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((4)*(expr[1]))+(((10)*(expr[2]))+(((-28)*(expr[3]))+((15)*(expr[4])))))));
}
}

void compute_coeffs_scalar_845(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[845] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((19)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[845] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((19)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((150)*(expr[2]))+(((-196)*(expr[3]))+((81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_846(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[846] = ((0.225585937500000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((19)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(4.43290043290043290043290043290));
} else {
coeffs[846] = ((0.225585937500000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((19)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((29)*(expr[1]))+(((-190)*(expr[2]))+(((514)*(expr[3]))+(((-579)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_847(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[847] = ((0.451171875000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-2.43290043290043290043290043290)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((-596)*(pow(a,3)))+((4)*((a)*((((1069)*(M))+((-149)*(r)))*(r))))))+(((-49.0909090909090909090909090909)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((-1.33333333333333333333333333333)*(((7)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((7)*(r)))))))+(((1.60000000000000000000000000000)*(((46)*(pow(a,3)))+((a)*((r)*(((-377)*(M))+((46)*(r)))))))+((0.222222222222222222222222222222)*(((696)*(pow(a,3)))+((6)*((a)*((r)*(((-811)*(M))+((116)*(r)))))))))))))));
} else {
coeffs[847] = ((0.451171875000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-29)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((190)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-514)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((579)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((((7)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((7)*(r))))))*(expr[1])))+(((4)*((((46)*(pow(a,3)))+((a)*((r)*(((-377)*(M))+((46)*(r))))))*(expr[2])))+(((((-596)*(pow(a,3)))+((4)*((a)*((((1069)*(M))+((-149)*(r)))*(r)))))*(expr[3]))+(((((696)*(pow(a,3)))+((6)*((a)*((r)*(((-811)*(M))+((116)*(r)))))))*(expr[4]))+((-270)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_848(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[848] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((19)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[848] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((19)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((47)*(expr[1]))+(((-370)*(expr[2]))+(((966)*(expr[3]))+(((-1005)*(expr[4]))+((363)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_849(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[849] = ((0.00585937500000000000000000000000)*((122.535709081067466600401626023)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[849] = ((0.00585937500000000000000000000000)*((122.535709081067466600401626023)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-47)*(expr[1]))+(((370)*(expr[2]))+(((-966)*(expr[3]))+(((1005)*(expr[4]))+((-363)*(expr[5]))))))));
}
}

}
