#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_600(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[600] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((9.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((12)*((pow(a,3))+((a)*((r)*(((8)*(M))+(r))))))+(((-4)*((pow(a,3))+((a)*((r)*(((16)*(M))+(r))))))+((-0.571428571428571428571428571429)*(((33)*(pow(a,3)))+((a)*((r)*(((32)*(M))+((33)*(r))))))))))));
} else {
coeffs[600] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-27)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((75)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-6)*(((pow(a,3))+((a)*((r)*(((16)*(M))+(r)))))*(expr[1])))+(((30)*(((pow(a,3))+((a)*((r)*(((8)*(M))+(r)))))*(expr[2])))+(((-2)*((((33)*(pow(a,3)))+((a)*((r)*(((32)*(M))+((33)*(r))))))*(expr[3])))+((42)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_601(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[601] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[601] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-50)*(expr[2]))+(((84)*(expr[3]))+((-45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_602(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[602] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[602] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((50)*(expr[2]))+(((-84)*(expr[3]))+((45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_603(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[603] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-14)*(M))+(r))))))+(((-16)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((24)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+((-2.66666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))))))));
} else {
coeffs[603] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((50)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-84)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((4)*(((pow(a,3))+((a)*((r)*(((-14)*(M))+(r)))))*(expr[1])))+(((-40)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[2])))+(((84)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[3])))+((-12)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_604(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[604] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[604] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-60)*(expr[1]))+(((350)*(expr[2]))+(((-588)*(expr[3]))+((297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_605(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[605] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[605] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((60)*(expr[1]))+(((-350)*(expr[2]))+(((588)*(expr[3]))+((-297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_606(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[606] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((54)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-56)*((pow(a,3))+((a)*((r)*(((8)*(M))+(r))))))+(((12)*(((11)*(pow(a,3)))+((a)*((r)*(((34)*(M))+((11)*(r)))))))+(((0.666666666666666666666666666667)*(((17)*(pow(a,3)))+((a)*((r)*(((206)*(M))+((17)*(r)))))))+((-2.66666666666666666666666666667)*(((53)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((53)*(r))))))))))))));
} else {
coeffs[606] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((60)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((588)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-297)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((((17)*(pow(a,3)))+((a)*((r)*(((206)*(M))+((17)*(r))))))*(expr[1]))+(((-140)*(((pow(a,3))+((a)*((r)*(((8)*(M))+(r)))))*(expr[2])))+(((42)*((((11)*(pow(a,3)))+((a)*((r)*(((34)*(M))+((11)*(r))))))*(expr[3])))+(((-12)*((((53)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((53)*(r))))))*(expr[4])))+((297)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_607(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[607] = ((0.0312500000000000000000000000000)*((4.58257569495584000658804719373)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[607] = ((0.0312500000000000000000000000000)*((4.58257569495584000658804719373)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-6)*(expr[1]))+((15)*(expr[2])))));
}
}

void compute_coeffs_scalar_608(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[608] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[608] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((18)*(expr[1]))+((-25)*(expr[2])))));
}
}

void compute_coeffs_scalar_609(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[609] = ((0.0546875000000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(18.2857142857142857142857142857));
} else {
coeffs[609] = ((0.0546875000000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((111)*(expr[1]))+(((-305)*(expr[2]))+((225)*(expr[3]))))));
}
}

void compute_coeffs_scalar_610(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[610] = ((0.109375000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-18.2857142857142857142857142857));
} else {
coeffs[610] = ((0.109375000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-111)*(expr[1]))+(((305)*(expr[2]))+((-225)*(expr[3]))))));
}
}

void compute_coeffs_scalar_611(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[611] = ((0.0546875000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-18.2857142857142857142857142857));
} else {
coeffs[611] = ((0.0546875000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-111)*(expr[1]))+(((305)*(expr[2]))+((-225)*(expr[3]))))));
}
}

void compute_coeffs_scalar_612(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[612] = ((0.109375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-16.2857142857142857142857142857)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((22)*(pow(a,3)))+(((-266)*((a)*((M)*(r))))+((22)*((a)*(pow(r,2)))))))+(((42.8571428571428571428571428571)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+((-4)*(((14)*(pow(a,3)))+((a)*((r)*(((-89)*(M))+((14)*(r))))))))))));
} else {
coeffs[612] = ((0.109375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-111)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((305)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((((22)*(pow(a,3)))+(((-266)*((a)*((M)*(r))))+((22)*((a)*(pow(r,2))))))*(expr[1]))+(((-10)*((((14)*(pow(a,3)))+((a)*((r)*(((-89)*(M))+((14)*(r))))))*(expr[2])))+((150)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_613(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[613] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[613] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-75)*(expr[1]))+(((285)*(expr[2]))+((-245)*(expr[3]))))));
}
}

void compute_coeffs_scalar_614(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[614] = ((0.0468750000000000000000000000000)*((2.64575131106459059050161575364)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[614] = ((0.0468750000000000000000000000000)*((2.64575131106459059050161575364)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((75)*(expr[1]))+(((-285)*(expr[2]))+((245)*(expr[3]))))));
}
}

void compute_coeffs_scalar_615(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[615] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[615] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((75)*(expr[1]))+(((-285)*(expr[2]))+((245)*(expr[3]))))));
}
}

void compute_coeffs_scalar_616(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[616] = ((0.0468750000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((678)*(pow(a,3)))+(((-866)*((a)*((M)*(r))))+((678)*((a)*(pow(r,2)))))))+(((-93.3333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((20)*((pow(a,3))+((a)*((r)*(((3)*(M))+(r))))))+((-4)*(((32)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((32)*(r))))))))))));
} else {
coeffs[616] = ((0.0468750000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((75)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-285)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((245)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((30)*(((pow(a,3))+((a)*((r)*(((3)*(M))+(r)))))*(expr[1])))+(((-10)*((((32)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((32)*(r))))))*(expr[2])))+(((((678)*(pow(a,3)))+(((-866)*((a)*((M)*(r))))+((678)*((a)*(pow(r,2))))))*(expr[3]))+((-420)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_617(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[617] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[617] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-300)*(expr[1]))+(((1730)*(expr[2]))+(((-2940)*(expr[3]))+((1575)*(expr[4])))))));
}
}

void compute_coeffs_scalar_618(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[618] = ((0.00781250000000000000000000000000)*((8.77496438739212206040638830742)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[618] = ((0.00781250000000000000000000000000)*((8.77496438739212206040638830742)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((300)*(expr[1]))+(((-1730)*(expr[2]))+(((2940)*(expr[3]))+((-1575)*(expr[4])))))));
}
}

void compute_coeffs_scalar_619(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[619] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[619] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((300)*(expr[1]))+(((-1730)*(expr[2]))+(((2940)*(expr[3]))+((-1575)*(expr[4])))))));
}
}

void compute_coeffs_scalar_620(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[620] = ((0.00781250000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((-26.6666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-17)*(M))+(r))))))+(((-336)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((46.6666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))+((8)*(((22)*(pow(a,3)))+((a)*((r)*(((-217)*(M))+((22)*(r))))))))))));
} else {
coeffs[620] = ((0.00781250000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((300)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-1730)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2940)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-1575)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((-40)*(((pow(a,3))+((a)*((r)*(((-17)*(M))+(r)))))*(expr[1])))+(((20)*((((22)*(pow(a,3)))+((a)*((r)*(((-217)*(M))+((22)*(r))))))*(expr[2])))+(((-1176)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[3])))+((210)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_621(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[621] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[621] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((180)*(expr[1]))+(((-1190)*(expr[2]))+(((2436)*(expr[3]))+((-1485)*(expr[4])))))));
}
}

void compute_coeffs_scalar_622(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[622] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[622] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-180)*(expr[1]))+(((1190)*(expr[2]))+(((-2436)*(expr[3]))+((1485)*(expr[4])))))));
}
}

void compute_coeffs_scalar_623(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[623] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[623] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-180)*(expr[1]))+(((1190)*(expr[2]))+(((-2436)*(expr[3]))+((1485)*(expr[4])))))));
}
}

void compute_coeffs_scalar_624(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[624] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((20)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((6288)*(pow(a,3)))+(((-9606)*((a)*((M)*(r))))+((6288)*((a)*(pow(r,2)))))))+(((-540)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-6.66666666666666666666666666667)*(((5)*(pow(a,3)))+((a)*((r)*(((26)*(M))+((5)*(r)))))))+(((56)*(((8)*(pow(a,3)))+((a)*((r)*((M)+((8)*(r)))))))+((-24)*(((53)*(pow(a,3)))+((a)*((r)*(((-48)*(M))+((53)*(r)))))))))))));
} else {
coeffs[624] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-180)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((1190)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2436)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((1485)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((10)*((a)*((M)*((r)*(expr[0])))))+(((-10)*((((5)*(pow(a,3)))+((a)*((r)*(((26)*(M))+((5)*(r))))))*(expr[1])))+(((140)*((((8)*(pow(a,3)))+((a)*((r)*((M)+((8)*(r))))))*(expr[2])))+(((-84)*((((53)*(pow(a,3)))+((a)*((r)*(((-48)*(M))+((53)*(r))))))*(expr[3])))+(((((6288)*(pow(a,3)))+(((-9606)*((a)*((M)*(r))))+((6288)*((a)*(pow(r,2))))))*(expr[4]))+((-2970)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_625(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[625] = ((0.750000000000000000000000000000)*((1.87082869338697069279187436616)*(((pow(a,2))+((-6)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[625] = ((0.750000000000000000000000000000)*((1.87082869338697069279187436616)*(((pow(a,2))+((-6)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+((-5)*(expr[2])))));
}
}

void compute_coeffs_scalar_626(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[626] = ((1.31250000000000000000000000000)*(((pow(a,2))+((-6)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.52380952380952380952380952381));
} else {
coeffs[626] = ((1.31250000000000000000000000000)*(((pow(a,2))+((-6)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-11)*(expr[1]))+(((35)*(expr[2]))+((-25)*(expr[3]))))));
}
}

void compute_coeffs_scalar_627(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[627] = ((1.31250000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.52380952380952380952380952381));
} else {
coeffs[627] = ((1.31250000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((11)*(expr[1]))+(((-35)*(expr[2]))+((25)*(expr[3]))))));
}
}

void compute_coeffs_scalar_628(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[628] = ((0.656250000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.52380952380952380952380952381));
} else {
coeffs[628] = ((0.656250000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((11)*(expr[1]))+(((-35)*(expr[2]))+((25)*(expr[3]))))));
}
}

void compute_coeffs_scalar_629(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[629] = ((1.31250000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.476190476190476190476190476190)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))));
} else {
coeffs[629] = ((1.31250000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((11)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))))));
}
}

void compute_coeffs_scalar_630(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[630] = ((0.187500000000000000000000000000)*((10.2469507659595983832210386805)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((-0.507936507936507936507936507937)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r)))))));
} else {
coeffs[630] = ((0.187500000000000000000000000000)*((10.2469507659595983832210386805)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((25)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((-57)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+((35)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))));
}
}

void compute_coeffs_scalar_631(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[631] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*(((pow(a,2))+((-6)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[631] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*(((pow(a,2))+((-6)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((20)*(expr[1]))+(((-110)*(expr[2]))+(((196)*(expr[3]))+((-105)*(expr[4])))))));
}
}

void compute_coeffs_scalar_632(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[632] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[632] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-20)*(expr[1]))+(((110)*(expr[2]))+(((-196)*(expr[3]))+((105)*(expr[4])))))));
}
}

void compute_coeffs_scalar_633(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[633] = ((0.0468750000000000000000000000000)*((13.8744369255116079467397289461)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[633] = ((0.0468750000000000000000000000000)*((13.8744369255116079467397289461)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-20)*(expr[1]))+(((110)*(expr[2]))+(((-196)*(expr[3]))+((105)*(expr[4])))))));
}
}

void compute_coeffs_scalar_634(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[634] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[634] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-20)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((110)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((105)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))));
}
}

void compute_coeffs_scalar_635(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[635] = ((0.656250000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[635] = ((0.656250000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((-60)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((238)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+(((-348)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))+((165)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))));
}
}

void compute_coeffs_scalar_636(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[636] = ((0.0312500000000000000000000000000)*((4.58257569495584000658804719373)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[636] = ((0.0312500000000000000000000000000)*((4.58257569495584000658804719373)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-6)*(expr[1]))+((15)*(expr[2])))));
}
}

void compute_coeffs_scalar_637(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[637] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[637] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-18)*(expr[1]))+((25)*(expr[2])))));
}
}

void compute_coeffs_scalar_638(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[638] = ((0.0546875000000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(18.2857142857142857142857142857));
} else {
coeffs[638] = ((0.0546875000000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((111)*(expr[1]))+(((-305)*(expr[2]))+((225)*(expr[3]))))));
}
}

void compute_coeffs_scalar_639(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[639] = ((0.109375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-16.2857142857142857142857142857)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((-22)*(pow(a,3)))+((2)*((a)*((((133)*(M))+((-11)*(r)))*(r))))))+(((-42.8571428571428571428571428571)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+((4)*(((14)*(pow(a,3)))+((a)*((r)*(((-89)*(M))+((14)*(r))))))))))));
} else {
coeffs[639] = ((0.109375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-111)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((305)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((((-22)*(pow(a,3)))+((2)*((a)*((((133)*(M))+((-11)*(r)))*(r)))))*(expr[1]))+(((10)*((((14)*(pow(a,3)))+((a)*((r)*(((-89)*(M))+((14)*(r))))))*(expr[2])))+((-150)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_640(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[640] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[640] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((75)*(expr[1]))+(((-285)*(expr[2]))+((245)*(expr[3]))))));
}
}

void compute_coeffs_scalar_641(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[641] = ((0.0468750000000000000000000000000)*((2.64575131106459059050161575364)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[641] = ((0.0468750000000000000000000000000)*((2.64575131106459059050161575364)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-75)*(expr[1]))+(((285)*(expr[2]))+((-245)*(expr[3]))))));
}
}

void compute_coeffs_scalar_642(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[642] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[642] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-75)*(expr[1]))+(((285)*(expr[2]))+((-245)*(expr[3]))))));
}
}

void compute_coeffs_scalar_643(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[643] = ((0.0468750000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((678)*(pow(a,3)))+(((-866)*((a)*((M)*(r))))+((678)*((a)*(pow(r,2)))))))+(((-93.3333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((20)*((pow(a,3))+((a)*((r)*(((3)*(M))+(r))))))+((-4)*(((32)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((32)*(r))))))))))));
} else {
coeffs[643] = ((0.0468750000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-75)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((285)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-245)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((30)*(((pow(a,3))+((a)*((r)*(((3)*(M))+(r)))))*(expr[1])))+(((-10)*((((32)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((32)*(r))))))*(expr[2])))+(((((678)*(pow(a,3)))+(((-866)*((a)*((M)*(r))))+((678)*((a)*(pow(r,2))))))*(expr[3]))+((-420)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_644(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[644] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[644] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-300)*(expr[1]))+(((1730)*(expr[2]))+(((-2940)*(expr[3]))+((1575)*(expr[4])))))));
}
}

void compute_coeffs_scalar_645(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[645] = ((0.00781250000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((26.6666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-17)*(M))+(r))))))+(((336)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((-46.6666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))+((-8)*(((22)*(pow(a,3)))+((a)*((r)*(((-217)*(M))+((22)*(r))))))))))));
} else {
coeffs[645] = ((0.00781250000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((300)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-1730)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2940)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-1575)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((40)*(((pow(a,3))+((a)*((r)*(((-17)*(M))+(r)))))*(expr[1])))+(((-20)*((((22)*(pow(a,3)))+((a)*((r)*(((-217)*(M))+((22)*(r))))))*(expr[2])))+(((1176)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[3])))+((-210)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_646(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[646] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[646] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-180)*(expr[1]))+(((1190)*(expr[2]))+(((-2436)*(expr[3]))+((1485)*(expr[4])))))));
}
}

void compute_coeffs_scalar_647(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[647] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[647] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((180)*(expr[1]))+(((-1190)*(expr[2]))+(((2436)*(expr[3]))+((-1485)*(expr[4])))))));
}
}

void compute_coeffs_scalar_648(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[648] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[648] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((180)*(expr[1]))+(((-1190)*(expr[2]))+(((2436)*(expr[3]))+((-1485)*(expr[4])))))));
}
}

void compute_coeffs_scalar_649(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[649] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((20)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((6288)*(pow(a,3)))+(((-9606)*((a)*((M)*(r))))+((6288)*((a)*(pow(r,2)))))))+(((-540)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-6.66666666666666666666666666667)*(((5)*(pow(a,3)))+((a)*((r)*(((26)*(M))+((5)*(r)))))))+(((56)*(((8)*(pow(a,3)))+((a)*((r)*((M)+((8)*(r)))))))+((-24)*(((53)*(pow(a,3)))+((a)*((r)*(((-48)*(M))+((53)*(r)))))))))))));
} else {
coeffs[649] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((180)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-1190)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2436)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-1485)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((10)*((a)*((M)*((r)*(expr[0])))))+(((-10)*((((5)*(pow(a,3)))+((a)*((r)*(((26)*(M))+((5)*(r))))))*(expr[1])))+(((140)*((((8)*(pow(a,3)))+((a)*((r)*((M)+((8)*(r))))))*(expr[2])))+(((-84)*((((53)*(pow(a,3)))+((a)*((r)*(((-48)*(M))+((53)*(r))))))*(expr[3])))+(((((6288)*(pow(a,3)))+(((-9606)*((a)*((M)*(r))))+((6288)*((a)*(pow(r,2))))))*(expr[4]))+((-2970)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

}
