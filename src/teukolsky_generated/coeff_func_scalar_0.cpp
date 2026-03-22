#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_0(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[0] = ((0.312500000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-5)*((M)*(pow(r,3))))+((2)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(6.40000000000000000000000000000));
} else {
coeffs[0] = ((0.312500000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-5)*((M)*(pow(r,3))))+((2)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((6)*(expr[1]))+(expr[2]))));
}
}

void compute_coeffs_scalar_1(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1] = ((0.312500000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(6.40000000000000000000000000000));
} else {
coeffs[1] = ((0.312500000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((6)*(expr[1]))+(expr[2]))));
}
}

void compute_coeffs_scalar_2(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[2] = ((0.156250000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-6.40000000000000000000000000000));
} else {
coeffs[2] = ((0.156250000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-6)*(expr[1]))+((-1)*(expr[2])))));
}
}

void compute_coeffs_scalar_3(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[3] = ((0.625000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2.40000000000000000000000000000)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-4)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+((0.400000000000000000000000000000)*(((4)*(pow(a,3)))+((2)*((a)*((r)*(((-5)*(M))+((2)*(r))))))))))));
} else {
coeffs[3] = ((0.625000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-6)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[2]))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((4)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[1])))+((((4)*(pow(a,3)))+((2)*((a)*((r)*(((-5)*(M))+((2)*(r)))))))*(expr[2]))))));
}
}

void compute_coeffs_scalar_4(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[4] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-5)*((M)*(pow(r,3))))+((2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[4] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-5)*((M)*(pow(r,3))))+((2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+((-10)*(expr[2]))));
}
}

void compute_coeffs_scalar_5(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[5] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[5] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+((-10)*(expr[2]))));
}
}

void compute_coeffs_scalar_6(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[6] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[6] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+((10)*(expr[2]))));
}
}

void compute_coeffs_scalar_7(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[7] = ((0.125000000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-4)*((pow(a,3))+((a)*((r)*(((-4)*(M))+(r))))))+((2.47619047619047619047619047619)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r)))))))));
} else {
coeffs[7] = ((0.125000000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+((10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2]))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((-10)*(((pow(a,3))+((a)*((r)*(((-4)*(M))+(r)))))*(expr[2])))+((-3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3])))))))));
}
}

void compute_coeffs_scalar_8(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[8] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-5)*((M)*(pow(r,3))))+((2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[8] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-5)*((M)*(pow(r,3))))+((2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((15)*(expr[2]))+((7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_9(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[9] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[9] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((15)*(expr[2]))+((7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_10(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[10] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[10] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_11(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[11] = ((0.375000000000000000000000000000)*((2.23606797749978969640917366873)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((-2)*((pow(a,3))+((a)*((r)*(((-12)*(M))+(r))))))+(((-4)*((pow(a,3))+((a)*((r)*((M)+(r))))))+((2)*(((3)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((3)*(r))))))))))));
} else {
coeffs[11] = ((0.375000000000000000000000000000)*((2.23606797749978969640917366873)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((-3)*(((pow(a,3))+((a)*((r)*(((-12)*(M))+(r)))))*(expr[1])))+(((-10)*(((pow(a,3))+((a)*((r)*((M)+(r)))))*(expr[2])))+((7)*((((3)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((3)*(r))))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_12(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[12] = ((0.0625000000000000000000000000000)*((7.41619848709566294871139744080)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-5)*((M)*(pow(r,3))))+((2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[12] = ((0.0625000000000000000000000000000)*((7.41619848709566294871139744080)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-5)*((M)*(pow(r,3))))+((2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((35)*(expr[2]))+((-42)*(expr[3])))));
}
}

void compute_coeffs_scalar_13(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[13] = ((0.0625000000000000000000000000000)*((7.41619848709566294871139744080)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[13] = ((0.0625000000000000000000000000000)*((7.41619848709566294871139744080)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((35)*(expr[2]))+((-42)*(expr[3])))));
}
}

void compute_coeffs_scalar_14(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[14] = ((0.0312500000000000000000000000000)*((7.41619848709566294871139744080)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[14] = ((0.0312500000000000000000000000000)*((7.41619848709566294871139744080)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-35)*(expr[2]))+((42)*(expr[3])))));
}
}

void compute_coeffs_scalar_15(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[15] = ((0.125000000000000000000000000000)*((7.41619848709566294871139744080)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((-6)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((14)*((pow(a,3))+((a)*((r)*(((-4)*(M))+(r))))))+((-8)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))))));
} else {
coeffs[15] = ((0.125000000000000000000000000000)*((7.41619848709566294871139744080)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((42)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((-7)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((35)*(((pow(a,3))+((a)*((r)*(((-4)*(M))+(r)))))*(expr[2])))+(((-21)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[3])))+((-15)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_16(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[16] = ((0.00390625000000000000000000000000)*((8.06225774829854965236661323030)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-5)*((M)*(pow(r,3))))+((2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[16] = ((0.00390625000000000000000000000000)*((8.06225774829854965236661323030)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-5)*((M)*(pow(r,3))))+((2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-17)*(expr[0]))+(((420)*(expr[1]))+(((-1190)*(expr[2]))+(((420)*(expr[3]))+((495)*(expr[4])))))));
}
}

void compute_coeffs_scalar_17(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[17] = ((0.00390625000000000000000000000000)*((8.06225774829854965236661323030)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[17] = ((0.00390625000000000000000000000000)*((8.06225774829854965236661323030)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-17)*(expr[0]))+(((420)*(expr[1]))+(((-1190)*(expr[2]))+(((420)*(expr[3]))+((495)*(expr[4])))))));
}
}

void compute_coeffs_scalar_18(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[18] = ((0.00195312500000000000000000000000)*((8.06225774829854965236661323030)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[18] = ((0.00195312500000000000000000000000)*((8.06225774829854965236661323030)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((17)*(expr[0]))+(((-420)*(expr[1]))+(((1190)*(expr[2]))+(((-420)*(expr[3]))+((-495)*(expr[4])))))));
}
}

void compute_coeffs_scalar_19(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[19] = ((0.00781250000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((68)*((a)*((M)*(r))))+(((26.6666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-23)*(M))+(r))))))+(((56)*(((2)*(pow(a,3)))+((a)*((r)*(((13)*(M))+((2)*(r)))))))+(((73.3333333333333333333333333333)*(((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r)))))))+((-48)*(((9)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((9)*(r))))))))))));
} else {
coeffs[19] = ((0.00781250000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((17)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-420)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((1190)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-420)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-495)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((34)*((a)*((M)*((r)*(expr[0])))))+(((40)*(((pow(a,3))+((a)*((r)*(((-23)*(M))+(r)))))*(expr[1])))+(((140)*((((2)*(pow(a,3)))+((a)*((r)*(((13)*(M))+((2)*(r))))))*(expr[2])))+(((-168)*((((9)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((9)*(r))))))*(expr[3])))+((330)*((((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_20(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[20] = ((0.625000000000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-10)*((M)*(pow(r,3))))+((4)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.60000000000000000000000000000));
} else {
coeffs[20] = ((0.625000000000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-10)*((M)*(pow(r,3))))+((4)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+((-1)*(expr[2]))));
}
}

void compute_coeffs_scalar_21(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[21] = ((1.25000000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.60000000000000000000000000000));
} else {
coeffs[21] = ((1.25000000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+((-1)*(expr[2]))));
}
}

void compute_coeffs_scalar_22(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[22] = ((0.625000000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.60000000000000000000000000000));
} else {
coeffs[22] = ((0.625000000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(expr[2])));
}
}

void compute_coeffs_scalar_23(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[23] = ((2.50000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.400000000000000000000000000000)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((0.400000000000000000000000000000)*(((-2)*(pow(a,3)))+((a)*((((5)*(M))+((-2)*(r)))*(r)))))+((1.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))))));
} else {
coeffs[23] = ((2.50000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((2)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+((((-2)*(pow(a,3)))+((a)*((((5)*(M))+((-2)*(r)))*(r))))*(expr[2]))))));
}
}

void compute_coeffs_scalar_24(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[24] = ((0.312500000000000000000000000000)*((1.87082869338697069279187436616)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-10)*((M)*(pow(r,3))))+((4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[24] = ((0.312500000000000000000000000000)*((1.87082869338697069279187436616)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-10)*((M)*(pow(r,3))))+((4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-6)*(expr[1]))+((5)*(expr[2])))));
}
}

void compute_coeffs_scalar_25(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[25] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[25] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-6)*(expr[1]))+((5)*(expr[2])))));
}
}

void compute_coeffs_scalar_26(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[26] = ((0.312500000000000000000000000000)*((1.87082869338697069279187436616)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[26] = ((0.312500000000000000000000000000)*((1.87082869338697069279187436616)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+((-5)*(expr[2])))));
}
}

void compute_coeffs_scalar_27(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[27] = ((1.25000000000000000000000000000)*((1.87082869338697069279187436616)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((-0.666666666666666666666666666667)*((a)*((pow(a,2))+((r)*(((-8)*(M))+(r))))))+(((0.857142857142857142857142857143)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((-0.400000000000000000000000000000)*((a)*(((2)*(pow(a,2)))+((r)*((M)+((2)*(r))))))))))));
} else {
coeffs[27] = ((1.25000000000000000000000000000)*((1.87082869338697069279187436616)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((6)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*(((pow(a,2))+((r)*(((-8)*(M))+(r))))*(expr[1]))))+(((-1)*((a)*((((2)*(pow(a,2)))+((r)*((M)+((2)*(r)))))*(expr[2]))))+((3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3])))))))));
}
}

void compute_coeffs_scalar_28(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[28] = ((0.187500000000000000000000000000)*((1.58113883008418966599944677222)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-10)*((M)*(pow(r,3))))+((4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[28] = ((0.187500000000000000000000000000)*((1.58113883008418966599944677222)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-10)*((M)*(pow(r,3))))+((4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[2]))+((-14)*(expr[3])))));
}
}

void compute_coeffs_scalar_29(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[29] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[29] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[2]))+((-14)*(expr[3])))));
}
}

void compute_coeffs_scalar_30(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[30] = ((0.187500000000000000000000000000)*((1.58113883008418966599944677222)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[30] = ((0.187500000000000000000000000000)*((1.58113883008418966599944677222)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[2]))+((14)*(expr[3])))));
}
}

void compute_coeffs_scalar_31(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[31] = ((0.750000000000000000000000000000)*((1.58113883008418966599944677222)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((-6)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((6)*(((2)*(pow(a,3)))+((a)*((r)*(((-5)*(M))+((2)*(r)))))))+((-2)*(((3)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((3)*(r)))))))))));
} else {
coeffs[31] = ((0.750000000000000000000000000000)*((1.58113883008418966599944677222)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((-9)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((15)*((((2)*(pow(a,3)))+((a)*((r)*(((-5)*(M))+((2)*(r))))))*(expr[2])))+((-7)*((((3)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((3)*(r))))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_32(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[32] = ((0.0312500000000000000000000000000)*((19.6214168703485834685260037892)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-10)*((M)*(pow(r,3))))+((4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[32] = ((0.0312500000000000000000000000000)*((19.6214168703485834685260037892)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-10)*((M)*(pow(r,3))))+((4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-35)*(expr[2]))+((21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_33(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[33] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[33] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-35)*(expr[2]))+((21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_34(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[34] = ((0.0312500000000000000000000000000)*((19.6214168703485834685260037892)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[34] = ((0.0312500000000000000000000000000)*((19.6214168703485834685260037892)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((35)*(expr[2]))+((-21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_35(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[35] = ((0.125000000000000000000000000000)*((19.6214168703485834685260037892)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-17)*(M))+(r))))))+(((3.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-6)*((pow(a,3))+((a)*((r)*(((-1)*(M))+(r))))))+((2)*((pow(a,3))+((a)*((r)*(((5)*(M))+(r)))))))))));
} else {
coeffs[35] = ((0.125000000000000000000000000000)*((19.6214168703485834685260037892)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+((((pow(a,3))+((a)*((r)*(((-17)*(M))+(r)))))*(expr[1]))+(((5)*(((pow(a,3))+((a)*((r)*(((5)*(M))+(r)))))*(expr[2])))+(((-21)*(((pow(a,3))+((a)*((r)*(((-1)*(M))+(r)))))*(expr[3])))+((15)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_36(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[36] = ((0.0781250000000000000000000000000)*((2.54950975679639241501411205451)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-10)*((M)*(pow(r,3))))+((4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[36] = ((0.0781250000000000000000000000000)*((2.54950975679639241501411205451)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-10)*((M)*(pow(r,3))))+((4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-70)*(expr[2]))+(((168)*(expr[3]))+((-99)*(expr[4]))))));
}
}

void compute_coeffs_scalar_37(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[37] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[37] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-70)*(expr[2]))+(((168)*(expr[3]))+((-99)*(expr[4]))))));
}
}

void compute_coeffs_scalar_38(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[38] = ((0.0781250000000000000000000000000)*((2.54950975679639241501411205451)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[38] = ((0.0781250000000000000000000000000)*((2.54950975679639241501411205451)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((70)*(expr[2]))+(((-168)*(expr[3]))+((99)*(expr[4]))))));
}
}

void compute_coeffs_scalar_39(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[39] = ((0.312500000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((13.3333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-28)*(((2)*(pow(a,3)))+((a)*((r)*(((-5)*(M))+((2)*(r)))))))+(((24)*(((3)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((3)*(r)))))))+((-7.33333333333333333333333333333)*(((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r)))))))))))));
} else {
coeffs[39] = ((0.312500000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-168)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((99)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((20)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((-70)*((((2)*(pow(a,3)))+((a)*((r)*(((-5)*(M))+((2)*(r))))))*(expr[2])))+(((84)*((((3)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((3)*(r))))))*(expr[3])))+((-33)*((((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_40(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[40] = ((1.87500000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((pow(a,2))*(pow(r,2)))+(((2)*((pow(M,2))*(pow(r,2))))+(((-5)*((M)*(pow(r,3))))+((2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.06666666666666666666666666667));
} else {
coeffs[40] = ((1.87500000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((pow(a,2))*(pow(r,2)))+(((2)*((pow(M,2))*(pow(r,2))))+(((-5)*((M)*(pow(r,3))))+((2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-2)*(expr[1]))+(expr[2]))));
}
}

void compute_coeffs_scalar_41(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[41] = ((1.87500000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.06666666666666666666666666667));
} else {
coeffs[41] = ((1.87500000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-2)*(expr[1]))+(expr[2]))));
}
}

void compute_coeffs_scalar_42(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[42] = ((0.937500000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.06666666666666666666666666667));
} else {
coeffs[42] = ((0.937500000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((2)*(expr[1]))+((-1)*(expr[2])))));
}
}

void compute_coeffs_scalar_43(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[43] = ((3.75000000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2.40000000000000000000000000000)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((1.33333333333333333333333333333)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))));
} else {
coeffs[43] = ((3.75000000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[2])))));
}
}

void compute_coeffs_scalar_44(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[44] = ((3.75000000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((-0.152380952380952380952380952381)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r)))))));
} else {
coeffs[44] = ((3.75000000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((2)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+((-1)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3])))))));
}
}

void compute_coeffs_scalar_45(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[45] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((pow(a,4))+(((-1)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((-2)*((pow(M,2))*(pow(r,2))))+(((5)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[45] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((pow(a,4))+(((-1)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((-2)*((pow(M,2))*(pow(r,2))))+(((5)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_46(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[46] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[46] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((9)*(expr[1]))+(((-15)*(expr[2]))+((7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_47(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[47] = ((0.468750000000000000000000000000)*((1.73205080756887729352744634151)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[47] = ((0.468750000000000000000000000000)*((1.73205080756887729352744634151)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_48(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[48] = ((1.87500000000000000000000000000)*((1.73205080756887729352744634151)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[48] = ((1.87500000000000000000000000000)*((1.73205080756887729352744634151)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))))));
}
}

void compute_coeffs_scalar_49(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[49] = ((1.87500000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-0.666666666666666666666666666667)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((0.666666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-2)*(M))+(r))))))));
} else {
coeffs[49] = ((1.87500000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((((pow(a,3))+((a)*((r)*(((-2)*(M))+(r)))))*(expr[1]))+(((-5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((7)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+((-3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))));
}
}

}
