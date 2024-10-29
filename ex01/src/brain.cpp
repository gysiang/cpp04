/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:26:13 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/29 15:41:45 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor initialised" << std::endl;
	ideas[0] = "Invent a self-watering plant pot.";
	ideas[1] = "Create an app for meal planning.";
	ideas[2] = "Design a floating bookshelf.";
	ideas[3] = "Develop a noise-canceling pillow.";
	ideas[4] = "Plan a community garden project.";
	ideas[5] = "Write a novel about time travel.";
	ideas[6] = "Build a robot that folds laundry.";
	ideas[7] = "Create a language-learning game.";
	ideas[8] = "Develop a mindfulness meditation app.";
	ideas[9] = "Invent a collapsible bike helmet.";
	ideas[10] = "Design a portable solar charger.";
	ideas[11] = "Create a virtual art gallery.";
	ideas[12] = "Write a cookbook for students.";
	ideas[13] = "Make an eco-friendly packaging material.";
	ideas[14] = "Develop an AI music composer.";
	ideas[15] = "Plan a pet adoption event.";
	ideas[16] = "Design a hands-free umbrella.";
	ideas[17] = "Build a digital wellness tracker.";
	ideas[18] = "Create an app for dream journaling.";
	ideas[19] = "Write a screenplay for a mystery film.";
	ideas[20] = "Invent a smart mirror with a virtual assistant.";
	ideas[21] = "Develop a platform for remote volunteering.";
	ideas[22] = "Design an ergonomic gaming chair.";
	ideas[23] = "Write a fantasy novel about dragons.";
	ideas[24] = "Create an app that matches recipes with ingredients you have.";
	ideas[25] = "Plan a virtual scavenger hunt.";
	ideas[26] = "Develop a subscription box for hobbies.";
	ideas[27] = "Make an app to teach sign language.";
	ideas[28] = "Build a DIY furniture kit.";
	ideas[29] = "Create an online course on financial literacy.";
	ideas[30] = "Design a smart water bottle that tracks hydration.";
	ideas[31] = "Plan a series of educational YouTube videos.";
	ideas[32] = "Write a dystopian novel set in the future.";
	ideas[33] = "Invent biodegradable phone cases.";
	ideas[34] = "Develop a platform for book lovers to trade books.";
	ideas[35] = "Design a customizable modular desk.";
	ideas[36] = "Write a sci-fi short story about AI rebellion.";
	ideas[37] = "Create a gardening app for beginners.";
	ideas[38] = "Invent a coffee mug that keeps coffee warm.";
	ideas[39] = "Plan a mental health awareness campaign.";
	ideas[40] = "Develop a fitness app for at-home workouts.";
	ideas[41] = "Create an AI-based pet monitor.";
	ideas[42] = "Write a guidebook on minimalism.";
	ideas[43] = "Design a compact exercise equipment for small spaces.";
	ideas[44] = "Invent an app that organizes personal notes.";
	ideas[45] = "Develop a mindfulness coloring book for adults.";
	ideas[46] = "Create a podcast on unsolved mysteries.";
	ideas[47] = "Plan a recipe sharing platform.";
	ideas[48] = "Write a children's book about outer space.";
	ideas[49] = "Design a solar-powered bike light.";
	ideas[50] = "Invent a sustainable clothing line.";
	ideas[51] = "Develop a habit-tracking app with reminders.";
	ideas[52] = "Create a series of cooking videos for beginners.";
	ideas[53] = "Plan a recycling initiative for electronics.";
	ideas[54] = "Write a poem anthology on nature.";
	ideas[55] = "Design a user-friendly budgeting app.";
	ideas[56] = "Create a VR experience for historical events.";
	ideas[57] = "Invent a virtual pet care assistant.";
	ideas[58] = "Plan an online music festival.";
	ideas[59] = "Write a blog on sustainable living tips.";
	ideas[60] = "Design a time-management board game.";
	ideas[61] = "Develop an eco-friendly travel guide.";
	ideas[62] = "Create a video series on mental health tips.";
	ideas[63] = "Invent a modular smartphone case.";
	ideas[64] = "Plan a book club with author interviews.";
	ideas[65] = "Write a story about parallel universes.";
	ideas[66] = "Design a temperature-sensitive color-changing mug.";
	ideas[67] = "Create a productivity journal with prompts.";
	ideas[68] = "Develop a virtual event platform.";
	ideas[69] = "Write a detective novel set in Victorian times.";
	ideas[70] = "Invent a smart fridge organizer.";
	ideas[71] = "Plan a travel app with itinerary suggestions.";
	ideas[72] = "Design an ergonomic phone grip.";
	ideas[73] = "Create a historical fiction novel.";
	ideas[74] = "Develop a digital photo album organizer.";
	ideas[75] = "Write a cookbook based on historical recipes.";
	ideas[76] = "Invent a collapsible kitchen tool set.";
	ideas[77] = "Plan an app for DIY crafts.";
	ideas[78] = "Design a hiking app with trail information.";
	ideas[79] = "Create an urban gardening guide.";
	ideas[80] = "Write a horror novel about a haunted house.";
	ideas[81] = "Develop a journaling app with daily prompts.";
	ideas[82] = "Plan an app to help declutter homes.";
	ideas[83] = "Invent a customizable phone stand.";
	ideas[84] = "Create an app that generates random story ideas.";
	ideas[85] = "Write a science fiction story on climate change.";
	ideas[86] = "Design an app for sharing eco-friendly tips.";
	ideas[87] = "Develop a workout app with social sharing features.";
	ideas[88] = "Plan a photo competition platform.";
	ideas[89] = "Invent a multi-purpose desk organizer.";
	ideas[90] = "Write a self-help book on goal setting.";
	ideas[91] = "Create an app for tracking personal achievements.";
	ideas[92] = "Design an app to discover local food events.";
	ideas[93] = "Develop a children's app for learning math.";
	ideas[94] = "Write a memoir about overcoming challenges.";
	ideas[95] = "Invent an app to explore virtual museums.";
	ideas[96] = "Create a music recommendation app.";
	ideas[97] = "Plan an app for tracking plant growth.";
	ideas[98] = "Develop a virtual study group app.";
	ideas[99] = "Write a sci-fi story about space travel.";
}

Brain::~Brain() {
	std::cout << "Brain Deconstructor initialised" << std::endl;
}

Brain::Brain(const Brain &copy){
	std::cout << "Brain copy constructor initalised" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &src) {
	std::cout << "Brain copy assignment constructor called\n";
	// copy the 100 ideas from src to this brain
	int	i = 0;

	while (i < 100)
	{
		this->ideas[i] = src.ideas[i];
		i++;
	}
	return (*this);
}
