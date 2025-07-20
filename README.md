
# 🤖 Fuzzy Controller AI

A project implementing a **Fuzzy Logic Controller** powered by AI techniques, designed to handle complex decision-making scenarios where traditional binary logic falls short. This controller uses fuzzy sets and inference rules to model human-like reasoning in uncertain or imprecise environments.

---

## ✨ Features

- 🔹 Implementation of fuzzy sets and membership functions  
- 🔹 Fuzzy inference system with customizable rules  
- 🔹 Defuzzification methods to convert fuzzy results into crisp outputs  
- 🔹 Integration with AI techniques for adaptive control  
- 🔹 Modular and extensible design for various control applications

---

## 🚀 Getting Started

### Prerequisites

- Python 3.7+ (or the language environment specified in the project)  
- Required libraries (see `requirements.txt` if available)  

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/krzz1234/Fuzzy_Controller_AI.git


2. Navigate to the project directory:

   ```bash
   cd Fuzzy_Controller_AI
   ```
3. (Optional) Create and activate a virtual environment:

   ```bash
   python -m venv venv
   source venv/bin/activate  # On Windows: venv\Scripts\activate
   ```
4. Install dependencies:

   ```bash
   pip install -r requirements.txt
   ```
5. Run the main controller script or test modules as needed.

---

## 📁 Project Structure

```
Fuzzy_Controller_AI/
├── controllers/
│   └── fuzzy_controller.py
├── tests/
│   └── test_fuzzy_logic.py
├── examples/
│   └── demo.py
├── requirements.txt
├── README.md
└── LICENSE
```

---

## 🛠️ Tech Stack

* **Language:** Python (or your project language)
* **Core Concepts:** Fuzzy Logic, AI, Control Systems

---

## 📚 Learning Goals

This project aims to:

* Demonstrate how fuzzy logic can improve decision-making under uncertainty
* Provide a flexible framework for designing AI-driven fuzzy controllers
* Serve as an educational tool for fuzzy logic theory and its applications
* Explore integration of AI techniques to adapt and optimize fuzzy control rules

---

## 📄 Usage Example

```python
from controllers.fuzzy_controller import FuzzyController

# Initialize the controller with specific rules and membership functions
controller = FuzzyController()

# Input crisp values
input_values = {'temperature': 70, 'humidity': 45}

# Perform fuzzy inference and get crisp output
output = controller.control(input_values)
print(f'Control Output: {output}')
```

---


