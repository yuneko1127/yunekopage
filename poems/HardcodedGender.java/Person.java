public class Person {
    private String name;
    private Gender gender;
    public Gender appearance;
    private boolean visitedGenderClinic; 

    public Person(String name, Gender appearance, Doctor doctor) {
        this.name = name;
        this.gender = doctor.assignGender(this);
        this.appearance = appearance;
    }

    public String getName() {
        return name;
    }

    public void setName(String name, Court familyCourt ) {
        if (familyCourt.validateName(this, name)) {
            this.name = name;
        } else {
            throw new IllegalArgumentException("Invalid name");
        }
    }

    public Gender getGender() {
        return gender;
    }

    public void setGender(Gender gender, Court familyCourt, Doctor doctor ) {
        if (familyCourt.validateGender(this, gender, doctor)) {
            this.gender = gender;
        } else {
            throw new IllegalArgumentException("Invalid gender");
        }
    }

    public Gender getAppearance() {
        return appearance;
    }

    public void setAppearance(Gender appearance) {
        this.appearance = appearance;
    }

    public boolean getMedicalTransition() {
        return this.visitedGenderClinic;
    }

    public void visitGenderClinic(Doctor doctor) {
        this.visitedGenderClinic = true;
    }

    
}
