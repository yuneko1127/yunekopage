class Court {
    
    public boolean validateName(Person person, String name) {
        if (!person.getAppearance().equals(person.getGender())) {
            return true;
        } else {
            return false;
        }
    }
    
    public boolean validateGender(Person person, Gender gender, Doctor doctor) {
        if (doctor.shareMedicalInfo(person) && person.getAppearance().equals(gender)) {
            return true;
        } else {
            return false;
        }
    }
}
